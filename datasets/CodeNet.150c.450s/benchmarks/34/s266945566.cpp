#include<iostream>
using namespace std;

int main(){
    int year;
    long long A[30];
    A[0]=1;
    A[1]=1;
    A[2]=2;
    int n;
    while(cin>>n && n!=0){
        for(int i=3;i<=n;++i){
            A[i]=A[i-1]+A[i-2]+A[i-3];
        }
        year=(A[n]/10)/365+1;
        cout<<year<<"\n";
    }
}