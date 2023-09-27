#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int w;
	while(cin>>w){
		vector<pair<int, int> > all;
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			int a, b;
			scanf("%d,%d", &a, &b);
			all.push_back(pair<int, int>(a, b));
		}
		reverse(all.begin(), all.end());
		for(int i=1; i<=w; i++){
			int ima = i;
			for(int j=0; j<n; j++){
				if(all[j].first == ima){
					ima = all[j].second;
				} else if(all[j].second == ima){
					ima = all[j].first;
				}
			}
			cout<<ima<<endl;
		}
	}
}