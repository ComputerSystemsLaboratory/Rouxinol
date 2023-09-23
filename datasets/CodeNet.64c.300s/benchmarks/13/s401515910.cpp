#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        if(n==0){
                cout<<1<<endl;
        }else{
                int a[n+1];
                a[0]=1;
                a[1]=1;
                for(int i=2;i<n+1;i++)
                        a[i] = a[i-1]+a[i-2];
                cout<<a[n]<<endl;
        }
        return 0;
}
