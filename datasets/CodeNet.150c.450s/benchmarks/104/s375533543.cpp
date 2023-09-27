#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
	int w,n,i;
	int a,b;
	cin>>w>>n;
	vector<int>num(w+5);
	for(i=1;i<=w;i++){
		num[i]=i;
	}
	for(i=1;i<=n;i++){
		char ch;
		cin>>a>>ch>>b;
		swap(num[a],num[b]);
	}
	for(i=1;i<=w;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}