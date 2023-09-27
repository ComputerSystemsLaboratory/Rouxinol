#include<iostream>
#include<string>
using namespace std;

int a,sum,ans,dx[6]={500,100,50,10,5,1};

int main (){
    while(1){
    cin >> a;
    if(a==0)break;
    a=1000-a;

    for(int i=0;i<6;i++){
    ans=a/dx[i];
    sum=sum+ans;
    a=a%dx[i];
    ans=0;
    }

    cout << sum << endl;
    sum=0;
    }
    return 0;
}