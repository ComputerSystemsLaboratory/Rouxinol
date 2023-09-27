#include<iostream>
using namespace std;
int main(void)
{
    int n,A,B,card1,card2;
    while(1){
            A=0;B=0;
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>card1>>card2;
            if(card1>card2)A+=card1+card2;
            else if(card2>card1)B+=card1+card2;
            else{
                A+=card1;
                B+=card2;
            }
        }
        cout<<A<<" "<<B<<"\n";
    }
}