#include <iostream>
using namespace std;
int main(void){
    char buf[21];
    int length=0;
    
    cin>>buf;
    for(int i=0; buf[i]!='\0'; i++) length++;
    for(int i=length-1; i>=0; i--) cout<<buf[i];
    cout<<endl;
    
    return 0;
}

