#include<iostream>
using namespace std;
int a[1000000]={0};
int main(){
    int n,c=0;
    for(int i=2;i<10000;i++)
        for(int j=i;j*i<1000000;j++)
            a[i*j]=1;
    while(cin>>n){
        c=0;
        for(int i=2;i<=n;i++)
            if(a[i]==0)
                c++;
        cout<<c<<endl;
    }
}