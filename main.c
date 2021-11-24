#include <stdio.h>

int main(void) {
  printf("hello\n");

  printf("int is %d\n", 3);
  printf("%d, %d, %d\n", 1, 2, 3);
  printf("double is %f\n", 3.0);
  printf("%f %f %f\n", 1.0, 2.0, 3.0);
  printf("%f + %f = %f\n", 1.0, 2.0, 1.0 + 2.0);
  printf("%f + %f = %f\n", 1.0, 0.123, 1.0 + 0.123);
  /* print with 5 digits */
  printf("A is %5d\n", 12345);
  printf("B is %5d\n", 123);
  printf("C is %5d\n", 1);
  /* print with 5 digits (add 0) */
  printf("D is %05d\n", 12345);
  printf("E is %05d\n", 123);
  printf("F is %05d\n", 1);
  double pi = 3.141592;
  printf("pi is %3.3f\n", pi);
  /* input */
  int data1, data2;
  printf("input integer: ");
  scanf("%d %d", &data1, &data2);
  printf("Your input is %d, %d\n", data1, data2);
  printf("input float: ");
  double doubleData;
  // scanf("%lf", &doubleData);
  // printf("Your input is %lf\n", doubleData);
  return 0;
}