#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	n--;
	int temp;
	cin>>temp;
	int minn=temp;
	int maxn=-1000000000;
	while(n--){
		int c;
		cin>>c;
		maxn=max(maxn,c-minn);
		minn=min(minn,c);
	}
	cout<<maxn<<endl;
	return 0;
}
