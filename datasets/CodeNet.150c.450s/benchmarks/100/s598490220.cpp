#include<iostream>


using namespace std;

int main(void)
{
unsigned int n;
cin>>n;
unsigned long long int ans=n;
while(n>1){
    ans*=--n;
}
cout<<ans<<endl;

return 0;
}