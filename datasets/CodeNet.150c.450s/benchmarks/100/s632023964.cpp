#include<iostream>

using namespace std;

int main(){
int x;
cin>>x;
long long ans=1;
for(int i=1;i<=x;i++)ans*=i;
cout<<ans<<endl;
}