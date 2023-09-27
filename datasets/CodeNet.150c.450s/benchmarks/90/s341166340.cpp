#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int all[100];
	for(int i=0; i<100; i++) all[i] = 0;
	while(cin>>n) all[n-1]++;
	int m = 0;
	for(int i=0; i<100; i++) m = max(m, all[i]);
	vector<int> ans;
	for(int i=0; i<100; i++){
		if(m==all[i]) ans.push_back(i+1);
	}
	for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
	return 0;
}