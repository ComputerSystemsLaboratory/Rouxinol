#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int n;;){
		cin>>n;
		if(!n)break;
		vector<pair<int,int>> w;
		w.push_back(make_pair(0,0));
		int xmx=0,xmn=0,ymx=0,ymn=0;
		for(int a,b;--n;){
			cin>>a>>b;
			if(b==0){
				xmn = min(xmn,w[a].first-1);
				w.push_back(make_pair(w[a].first-1,w[a].second));
			}else if(b==1){
				ymx = max(ymx,w[a].second+1);
				w.push_back(make_pair(w[a].first,w[a].second+1));
			}else if(b==2){
				xmx = max(xmx,w[a].first+1);
				w.push_back(make_pair(w[a].first+1,w[a].second));
			}else{
				ymn = min(ymn,w[a].second-1);
				w.push_back(make_pair(w[a].first,w[a].second-1));
			}
		}
		cout<<(xmx-xmn+1)<<" "<<(ymx-ymn+1)<<endl;
	}
}