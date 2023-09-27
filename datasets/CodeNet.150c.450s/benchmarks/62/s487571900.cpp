#include <iostream>
#include <stdio.h>
using namespace std;

void change(int& a,int& b){
        if(a>b){
                int d;
                d = a;
                a = b;
                b = d;
        }
}

int main(){
        int a,b,c;
        cin>>a>>b>>c;
        change(a,b);
        change(b,c);
        change(a,b);
        printf("%d %d %d\n",a,b,c);
        return 0;
}