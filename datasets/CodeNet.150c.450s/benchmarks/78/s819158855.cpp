#include <iostream>
#include <vector>

using namespace std;

int main(){
	static int dpA[1000001], dpB[1000001];
	vector<int> v;
	for(int i=0;i<=1000000;i++) dpA[i] = dpB[i] = 10000;
	dpA[0] = dpB[0] = 0;
	for(int i=1;;i++){
		int s = i*(i+1)*(i+2)/6;
		if(s > 1000000) break;
		v.push_back(s);
	}
	for(int i=0;i<=1000000;i++){
		for(int j=0;j<v.size()&&i+v[j]<=1000000;j++){
			dpA[i+v[j]] = min(dpA[i+v[j]], dpA[i]+1);
			if(v[j]%2==1){
				dpB[i+v[j]] = min(dpB[i+v[j]], dpB[i]+1);
			}
		}
	}
	int t;
	while(cin >> t && t){
		cout << dpA[t] << " " << dpB[t] << endl;
	}
}