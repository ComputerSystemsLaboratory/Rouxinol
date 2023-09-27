#include<iostream>
using namespace std;
#define L long long int
int main(){
int n,ans=100000;
cin>>n;
while(n--){
	ans*=1.05;
	ans+=ans%1000==0 ? -ans%1000:1000-ans%1000;

}
cout<<ans<<endl;
return 0;
}