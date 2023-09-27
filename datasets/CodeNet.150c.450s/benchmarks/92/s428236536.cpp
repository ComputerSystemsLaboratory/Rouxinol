#include<iostream>
using namespace std;
int jud(int x){
    int c=0;
    while(x){
        x/=10;
        c++;
    }
    return c;
}
int main(void){
    int a, b;
    while(cin>>a>>b){
        cout<<jud(a+b)<<endl;
    }
    return 0;
}