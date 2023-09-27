#include<iostream>
using namespace std;

int main()
{
int p1=0,p2=0;
for(int i=0;i<4;i++){
int t;
cin>>t;
p1+=t;
}
for(int i=0;i<4;i++){
int t;
cin>>t;
p2+=t;
}
cout<<max(p1,p2)<<endl;
}