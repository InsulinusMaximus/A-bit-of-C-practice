#include <stdio.h>
int main(void) {
  char str[10];
  fgets(str, 10, stdin);
  puts(str);

  int h = 99;
  printf("do %d\n", h);
  scanf("%d",&h);
  printf("posle %d\n", h);

  return 0;
}