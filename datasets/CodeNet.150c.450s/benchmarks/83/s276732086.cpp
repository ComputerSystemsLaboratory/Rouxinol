#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N,W;
	vector<vector<int> > item;
	cin>>N>>W;
	item.resize(N+1);
	for(int i=0;i<=W;i++){
		item[0].push_back(0);
	}
	for(int i=1;i<=N;i++){
		int v,w;
		cin>>v>>w;
		for(int j=0;j<=W;j++){
			if(j>=w && (v+item[i-1][j-w])>item[i-1][j]){
				item[i].push_back(v+item[i-1][j-w]);
			}else{
				item[i].push_back(item[i-1][j]);
			}
		}
	}
	cout<<item[N][W]<<endl;
	
	
	return 0;
}