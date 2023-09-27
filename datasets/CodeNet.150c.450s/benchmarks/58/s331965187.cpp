#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(void){
    int x[100];
    int n=0;
    char c[100];
    
    while(scanf("%s",c)!=-1){
        if(c[0]=='+'){
            x[n-2]=x[n-2]+x[n-1];
            n--;
        }
        else if(c[0]=='-'){
            x[n-2]=x[n-2]-x[n-1];
            n--;
        }
        else if(c[0]=='*'){
            x[n-2]=x[n-2]*x[n-1];
            n--;
        }
        else{
            x[n]=atoi(c);
            n++;
        }
    }
    cout<<x[0]<<endl;
    return 0;
}
