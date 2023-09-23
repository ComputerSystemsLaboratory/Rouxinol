#include<iostream>
using namespace std;
int main(){
int i,n[101]={0},m=0;
while(cin>>i)n[i]++;
for(i=0;i<100;i++)if(n[i]>m)m=n[i];
for(i=0;i<100;i++)if(n[i]==m)cout<<i<<endl;
return 0;
}