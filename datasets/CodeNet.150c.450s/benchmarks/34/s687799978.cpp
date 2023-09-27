#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int main(void){
	int n;
	long long a[30]={1,2,4};
	loop(i,3,30)
		a[i] = a[i-1] + a[i-2] + a[i-3];
	while(cin>>n,n)
		cout<<1+a[n-1]/3650<<endl;
		
	return 0;
}