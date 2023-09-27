#include<iostream>
#include<algorithm>

#define loop(i,a,b) for(int i=a ;i < b ; i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(void){
	int a;
	while(cin>>a){
	
	long long int sum=1;
	loop(i,1,a+1)sum*=i;
	cout<<sum<<endl;
	}
	return 0;
}