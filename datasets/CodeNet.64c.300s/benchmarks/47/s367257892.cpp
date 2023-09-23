#include<iostream>
using namespace std;

int main()
{
    int n,number[101]={0},max=0;
    while(cin>>n){
        number[n]++;
        if(number[n]>max){
            max=number[n];
        }
    }
    for(int i=1;i<101;i++){
        if(number[i]==max){
            cout<<i<<endl;
        }
    }
    return 0;
}