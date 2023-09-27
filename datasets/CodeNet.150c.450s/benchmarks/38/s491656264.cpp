#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int num;
    int a,b,c;
    int rest;
    int M;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >>a>>b>>c;
        M=max(a,max(b,c));
        M=M*M;
        rest=a*a+b*b+c*c;
        rest=rest-M;
        if(M==rest){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}