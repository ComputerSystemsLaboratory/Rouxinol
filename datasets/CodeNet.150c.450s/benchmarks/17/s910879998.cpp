#include<iostream>
#include<algorithm>

#define loop(i,a,b) for(int i=a ;i < b ; i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(void){
	int a[5];
	
	rep(i,5)cin>>a[i];
	
	sort(a,a+5,greater<int>());
	
	cout<<a[0];
	
	loop(i,1,5)cout<<" "<<a[i];
	
	cout<<endl;
	
	return 0;
}