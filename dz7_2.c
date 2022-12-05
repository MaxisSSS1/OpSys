#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

struct thread {
	char * name;
	char * str;
	int num;
};

void * any_func(void * arg) {
	int i;
	struct thread targ = *(struct thread *) arg;
	for (i = 1; i <= targ.num; i++){
		printf(" %s. %s %d\n",targ.name, targ.str, i );
		sleep(1);
	}
	return NULL;
}

int main(void) {
	pthread_t thread1, thread2, thread3, thread4;
	
	struct thread targ;
	struct thread targ1;
	struct thread targ2;
	struct thread targ3;
	
	targ.name = "Thread1";
	targ.str = "Bill";
	targ.num = 1;
	
	targ1.name = "Thread2";
	targ1.str = "Bob";
	targ1.num = 2;

	targ2.name = "Thread3";
	targ2.str = "Lucy";
	targ2.num = 3;

	targ3.name = "Thread4";
	targ3.str = "David";
	targ3.num = 4;

	if (pthread_create(&thread1, NULL, &any_func, &targ) != 0) {
		fprintf(stderr, "Error (thread1)\n");
		return 1;
	}
	
	if (pthread_create(&thread2, NULL, &any_func, &targ1) != 0) {
		fprintf(stderr, "Error (thread2)\n");
		return 1;
	}
	
	if (pthread_create(&thread3, NULL, &any_func, &targ2) != 0) {
		fprintf(stderr, "Error (thread3)\n");
		return 1;
	}

	if (pthread_create(&thread4, NULL, &any_func, &targ3) != 0) {
		fprintf(stderr, "Error (thread4)\n");
		return 1;
	}
	
	sleep(5);
	return 0;
}
