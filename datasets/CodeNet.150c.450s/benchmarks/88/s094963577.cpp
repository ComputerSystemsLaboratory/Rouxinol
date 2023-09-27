#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> p;

bool comp(const p &a,const p &b){
	if(a.first*a.first + a.second*a.second == b.first*b.first + b.second*b.second){
		return a.first < b.first;
	}else{
		return a.first*a.first + a.second*a.second < b.first*b.first + b.second*b.second;
	}
}

int main(){
	int h,w;
	vector<p> table;

	for(int i=1;i<151;i++){
		for(int j=i+1;j<151;j++){
			table.push_back(p(i,j));
		}
	}
	sort(table.begin(),table.end(),comp);

	while(cin>>h>>w){
		if(h==w&&h==0){
			break;
		}
		vector<p>::iterator ans = upper_bound(table.begin(),table.end(),p(h,w),comp);
		cout<<(*ans).first<<" "<<(*ans).second<<endl;
	}
	return 0;
}