#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int ary[110];
int main(){
	int n;
	while(cin>>n){
		ary[n]++;
	}
	vector<pair<int,int> > ve;
	for(int i=1;i<=100;i++){
		ve.push_back(make_pair(-ary[i],i));
	}
	sort(ve.begin(),ve.end());
	cout<<ve[0].second<<endl;
	for(int i=1;i<100;i++){
		if(ve[i-1].first!=ve[i].first)break;
		cout<<ve[i].second<<endl;
	}
	return 0;
}