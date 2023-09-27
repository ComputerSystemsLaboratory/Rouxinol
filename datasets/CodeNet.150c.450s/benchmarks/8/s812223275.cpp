#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    int a,i,b=0,c=0,j;
    cin >> a;
    for(i=0;i<a;i++){
    cin >> str1 >>str2;
    if(str1>str2)b=b+3;
    if(str1<str2)c=c+3;
    if(str1==str2){
        b=b+1;
        c=c+1;
    }
    }
    cout << b <<  ' ' << c << endl;
}