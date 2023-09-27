#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char a;
    a=1;
    while(true){
        scanf("%c",&a);
        if(a=='\n'){
            break;
        }
        if(a>='a' && a<='z'){
            a=a-32;
        }else if(a>='A' && a<='Z'){
            a=a+32;
        }
        cout<<(char)a;
    }
    cout<<endl;
    return 0;
}