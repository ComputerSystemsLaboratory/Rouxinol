#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
 int a, b;
 int result[1001];
 char op;
 int i = 0;
 while(scanf("%d %c %d", &a, &op, &b), op!='?')
 {
  switch(op)
  {
   case '+':
    result[i++] = a + b;
    break;
   case '-':
    result[i++] = a - b;
    break;
   case '*':
    result[i++] = a * b;
    break;
   case '/':
    result[i++] = a / b;
    break;
   default:
    break;
  }
 }
 for (int j = 0; j < i; j++)
 {
  cout << result[j] << endl;
 }
}
