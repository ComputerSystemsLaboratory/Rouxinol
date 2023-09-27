//Switching Railroad Cars
#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(void){
    stack<int> Q;
    int n;
    
    while((scanf("%d", &n) != EOF)){
        if(n == 0){
            int  x = Q.top(); Q.pop();
            printf("%d\n", x);
        }else{
            Q.push(n);
        }
    }
    
    return 0;
}