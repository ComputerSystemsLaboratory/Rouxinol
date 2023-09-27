#include<iostream>
using namespace std;
int main(void)
{
    int num[6],sta;
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(num[j]<num[j+1]){
                sta=num[j];
                num[j]=num[j+1];
                num[j+1]=sta;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<num[i];
        if(i==4)cout<<"\n";
        else cout<<" ";
    }
}