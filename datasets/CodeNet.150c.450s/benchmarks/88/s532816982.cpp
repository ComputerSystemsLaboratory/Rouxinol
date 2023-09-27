#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int,pair<int,int>>>v;
	for(int i=1;i<150;++i){
		for(int j=i+1;j<=150;++j){
			v.push_back(make_pair(i*i+j*j,make_pair(i,j)));
		}
	}
	sort(v.begin(),v.end());
	int h,w;
	while(cin>>h>>w,h){
		int a=h*h+w*w;
		bool flag=0;
		for(auto x:v){
			if(flag){
				cout<<x.second.first<<" "<<x.second.second<<endl;
				break;
			}
			if(x.first==a && x.second.first==h){
				flag=1;
			}
		}
	}
}