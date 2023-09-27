#include<iostream>
using namespace std;
int main(){
    int n,ap,bp,a,b;
    cin>>n;
    while(n!=0){
        ap=0;
        bp=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            ap+=a==b?a:(a>b?a+b:0);
            bp+=a==b?b:(a<b?a+b:0);
        }
        cout<<ap<<' '<<bp<<endl;
        cin>>n;
    }
}