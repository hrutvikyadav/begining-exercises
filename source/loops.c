#include <stdio.h>
#include <string.h>

int main() {
  printf("Hello simple I/O\n");

  // char userIn[20];
  // scanf("%s", userIn );

  // printf("%s", userIn);

  for (int i = 0, j = 0, end = 3; i <= end; i++) {
    j = i;
    while (j > 0) {
      printf("*");
      j--;
    }
    printf("\n");
  }

  return 0;
}
