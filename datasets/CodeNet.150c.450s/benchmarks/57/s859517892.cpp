#include <iostream>
using namespace std;
int main(void){
      int a,b,k;
      char op;
      while(1){
            cin >> a >> op >> b;
            if(op=='?')break;
            else if(op=='+')k=a+b;
            else if(op=='-')k=a-b;
            else if(op=='*')k=a*b;
            else if(op=='/')k=a/b;
            cout<<k<<endl;
            }
      return 0;
}
