#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
//#include <string>


int main(){
    int a, b;
    char  op;
    int c;
    while(1){ 
        int d; 
//        cin >> a >> op >> b;
        scanf("%d %c %d", &a, &op, &b);
//       if(&op == "+"){
       if(strncmp(&op, "?", 1) == 0)
        {break;}
       else if(strncmp(&op, "+", 1) == 0){
           c = a + b;
           } 
       else if(strncmp(&op, "-", 1) == 0){
           c = a - b;
        }
       else if(strncmp(&op, "*", 1) == 0){
           c = a * b;
        }
       else if(strncmp(&op, "/", 1) == 0){
           c = a / b;
        }
       cout << c << endl;
    }
return 0;
}