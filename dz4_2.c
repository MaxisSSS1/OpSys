#include <stdio.h>
#include <getopt.h>

int main(int argc, char **argv) {
  if (argc==1) {
    printf(" -h для вывода информации\n");
    printf("-о <filename> для компилирования в определенный файл\n");
    printf(" -c для специального режима работы\n");
    return 0;
  }
  char *options = "hco:";
  int opt;
  while ((opt = getopt(argc, argv, options))!=-1) {
    switch ((char)opt) {
      case 'h': {
        printf(" -h для вывода информации\n");
        printf(" -о <filename> для компилирования в определенный файл\n");
        printf(" -c для специального режима работы\n");
        break;
      }
      case 'c': {
        printf("Особый режим работы\n");
        break;
      }
      case 'o': {
        printf("Вы изменили имя файла %s\n", optarg);
        break;
      }
      default: {
        printf("%c\n", opt);
      }
    }
  }
  return 0;
}
