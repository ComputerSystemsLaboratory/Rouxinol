#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	while(1){
		int N;
		cin>>N;
		if(N==0) break;
		vector<int> x;
		vector<int> y;
		x.push_back(0);
		y.push_back(0);
		for(int i=1;i<=N-1;i++){
			int n,d;
			cin>>n>>d;
			switch(d){
			case 0:
				x.push_back(x[n]-1);
				y.push_back(y[n]);
				break;
			case 1:
				x.push_back(x[n]);
				y.push_back(y[n]-1);
				break;
			case 2:
				x.push_back(x[n]+1);
				y.push_back(y[n]);
				break;
			case 3:
				x.push_back(x[n]);
				y.push_back(y[n]+1);
				break;
			}
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		cout<<x[x.size()-1]-x[0]+1<<" "<<y[y.size()-1]-y[0]+1<<endl;
	}
	return 0;
}