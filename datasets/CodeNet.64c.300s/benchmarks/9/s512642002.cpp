#include<iostream>
using namespace std;
int main(void)
{
    int n,c,A=0,b,a1,b1,A1=100000;
    cin>>n;
    for(int i=0;i<n;i++){
        b1=A1*0.05;
        c=b1;
        b1/=1000;
        a1=b1*1000;
        if(c%1000!=0)a1+=1000;
        A1+=a1;
    }        cout<<A1<<"\n";
}