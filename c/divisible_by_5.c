#include <stdio.h>

void check_divisibility(int num) {
  if (num % 5 == 0)
        printf("TRUE\n");
  else {
        printf("FALSE\n");
  }
}

int main() {
    int num;
    scanf("%d", &num);
    check_divisibility(num);
    return 0;
}
