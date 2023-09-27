#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
        cout<<str[str.length()-i-1];
    cout<<endl;
}