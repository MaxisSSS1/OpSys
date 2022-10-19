#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>

int main() { 
	char *s; 
	char name[100] = "TESTNAME";
	char value[100] = "VALUE";
	int overwrite = 0;
	int menubar = 0;
	while (menubar != -1) {
		printf("1 - Add using setenv\n");
		printf("2 - Add using putenv\n");
		printf("3 - Exit\n");
		printf("ENTER: ");
		scanf("%d",&menubar);
		switch(menubar) {
		case 3: {return 0;
		}
		case 1: {
			if (strcmp(name,"") == 0 || strcmp(value,"") == 0) {
        			printf("You see this message because the name or value are not entered.\n");
				printf("Enter name: ");
				scanf("%s", name);
				printf("Enter value: ");
				scanf("%s", value);
				printf("Enter overwrite flag(0 - not, 1 - true): ");
				scanf("%d", &overwrite);
			}
			int result = setenv(name, value, overwrite);
			if (result == -1) {
				printf("Error, not enough memory\n");
			}
			printf("%s\n", getenv(name));
			break;
			}
			case 2: {
			if (strcmp(name,"") == 0 || strcmp(value,"") == 0) {
				printf("You see this message because the name or value are not entered.\n");
				printf("Enter name: ");
				scanf("%s", name);
				printf("Enter value: ");
				scanf("%s", value);
				}
			char insertString[10000];
			strcat(insertString, name);
			strcat(insertString, "=");
			strcat(insertString, value);
			int result = putenv(insertString);
			if (result == -1) {
				printf("Error, not enough memory\n");
			}
			printf("%s\n", getenv(name));
			break;
			}
		}
	}
	return 0; 
}
