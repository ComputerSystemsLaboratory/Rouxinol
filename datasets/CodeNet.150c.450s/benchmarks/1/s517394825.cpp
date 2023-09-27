#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;	cin>>n;
	vector<int> ls;
	for(int i=0;i<n;i++){
		int a;	cin>>a;
		if(ls.empty())	ls.push_back(a);
		else if(ls[ls.size()-1]<a)	ls.push_back(a);
		else{
			auto it=lower_bound(ls.begin(),ls.end(),a);
			*it=a;
		}
	}
	cout<<ls.size()<<endl;
	return 0;
}