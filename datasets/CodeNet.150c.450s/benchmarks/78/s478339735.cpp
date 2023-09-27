#include <iostream>
#include <vector>
using namespace std;

int main(){
	static int num[1000001],odd[1000001];
	vector<int> pol,podd;
	for(int i = 0;i <= 1000000;i++) odd[i] = i;
	for(int i = 1;;i++){
		int p = i * (i + 1) * (i + 2) / 6;
		if(p > 1000000) break;
		pol.push_back(p);
		num[p] = 1;
		if(p % 2) podd.push_back(p);
	}
	for(int i = 1;i <= 4;i++){
		for(int j = 0;j <= 1000000;j++){
			if(num[j] == i){
				for(int k = 0;k < pol.size();k++){
					if(j + pol[k] <= 1000000) {
						if(!num[j + pol[k]]) num[j + pol[k]] = i + 1;
						else num[j + pol[k]] = min(num[j + pol[k]],i + 1);
					}
				}
			}
		}
	}
	for(int i = 1;i < podd.size();i++){
		for(int j = 0;j <= 1000000;j++){
			if(j + podd[i] > 1000000) break;
			odd[j + podd[i]] = min(odd[j + podd[i]],odd[j] + 1);
		}
	}
	int n;
	while(cin >> n,n){
		cout << num[n] << " " << odd[n] << endl;
	}
	return 0;
}