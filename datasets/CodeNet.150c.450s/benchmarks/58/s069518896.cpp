#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int top = 0;
int N[10000];

void push(int x)
 {
   top++;
   N[top] = x;
 }

int pop()
 {
   top--;
   return N[top + 1];
 }

int main()
 {
   string a;
   while(cin >> a)
     { 
       //cout << a << endl;
       if( a == "+") //?¶???????
         {
           int A,B,C;
            A = pop();
            B = pop();
            C = A + B;
           push(C);
          // cout << A << endl;
           //cout << B << endl;
           //cout << C << endl;
         } 

       else if( a == "-") //?????????
         {
           int E,F,G;
            E = pop();
            F = pop();
            G = F - E;
           push(G);
          // cout << E << endl;
         }

       else if( a == "*") //?????????
         {
           int H,I,J;
            H = pop();
            I = pop();
            J = H * I;
           //cout << H << endl;
           push(J);
         }

       else //??°???
         {
           push(atoi(a.c_str()));
          // cout << a << endl;
         }
     }
    cout << pop() << endl;
    return 0;
 }