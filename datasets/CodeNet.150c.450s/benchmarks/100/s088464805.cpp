#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
	long long int ans;
	int n;
	ans=1;

	cin >> n;
	for(int i=1;i<=n;i++)
		ans *=i;
	cout<<ans<<endl;

}