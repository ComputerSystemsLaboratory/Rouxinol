#include<iostream>
using namespace std;

int GCD(int a, int b){
    return b == 0 ? a:GCD(b, a%b);
}

int main(){
    int a, b;
    cin>>a>>b;
    a = GCD(a, b);
    cout<<a<<endl;
    return 0;
}
