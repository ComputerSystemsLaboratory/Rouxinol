#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int h,x;
	vector<int> a;
	cin>>h;
	a.pb(0);
	for (int i=1; i<=h; i++){
		cin>>x;
		a.pb(x);
	}
	for (int i=1; i<=h; i++){
		cout<<"node "<<i<<": key = "<<a[i]<<",";
		if (i/2!=0)
		   cout<<" parent key = "<<a[i/2]<<",";
		if (2*i>0 && 2*i<=h)
		   cout<<" left key = "<<a[2*i]<<",";
		if ((2*i+1)>0 && (2*i+1)<=h)
		   cout<<" right key = "<<a[2*i+1]<<",";
		cout<<' '<<'\n';
	}
	return 0;
}
