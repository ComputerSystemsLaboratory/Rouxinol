#include<iostream>
#include<queue>
#include<utility>
#include<cmath>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef pair<int,int> pii;
typedef pair<double,pii> pdii;

int main(){
	int h,w;
	vector<pdii> vec;
	loop(i,1,200){
		loop(j,i+1,200){
			pii dt=pii(i,j);
			pdii res=pdii((i*i+j*j),dt);
			vec.push_back(res);
		}
	}
	sort(vec.begin(),vec.end());
	while(1){
		cin>>h>>w;
		if(h==0 && w==0)break;
		rep(i,vec.size()){
			if(vec[i].first==(h*h+w*w) &&vec[i].second.first==h && vec[i].second.second==w){
				cout<<vec[i+1].second.first<<" "<<vec[i+1].second.second<<endl;
				break;
			}
		}
	}
	return 0;
}