#include <stdio.h>

int main(void) {
  float a, b, ans;
  int choice;

  printf("Enter value of A = ");
  scanf("%f", &a);
  printf("Enter value of B = ");
  scanf("%f", &b);

  printf("\nSelect your choice from following available options");
  printf("\n1.Add");
  printf("\n2.SUB");
  printf("\n3.MUL");
  printf("\n4.Div");
  printf("\nchoice : ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    ans = a + b;
    printf("Addition = %f", ans);
    break;
  case 3 - 1:
    ans = a - b;
    printf("Sub = %f", ans);
    break;
  case 3:
    printf("Mul = %f", a * b);
    break;
  case 4:
    ans = a / b;
    printf("Div = %f", ans);
    break;
  default:
    printf("\n Invalid choice");
  }

  return 0;
}
