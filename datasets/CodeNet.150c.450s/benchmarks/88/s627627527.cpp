#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
int main(){
	map<int,vector<int> > data;
	for(int i=150-1;i>0;i--){
		for(int j=i-1;j>0;j--){
			data[i*i+j*j].push_back(j);
		}
	}
	int h,w;
	while(cin>>h>>w&&(h!=0||w!=0)){
		bool f=false;
		int s=h*h+w*w;
		sort(data[s].begin(),data[s].end());
		for(int i=0;i<data[s].size();i++){
			if(data[s][i]>h){
				f=true;
				cout<<data[s][i]<<" "<<sqrt(s-data[s][i]*data[s][i])<<endl;
				break;
			}
		}
		if(f)continue;
		while(1){
			s++;
			if(data[s].size()){
				sort(data[s].begin(),data[s].end());
				cout<<data[s][0]<<" "<<sqrt(s-data[s][0]*data[s][0])<<endl;
				break;
			}
		}
	}
}