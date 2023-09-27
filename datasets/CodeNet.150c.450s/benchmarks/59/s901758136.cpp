#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(void){
	vector<int> v;
	int n;cin >> n;
	for(int i=0;i<n;i++){
		int a;cin >> a;
		v.push_back(a);
	}

	for(int i=1;i<v.size();i++){
		for(int k=0;k<n;k++){
					cout << v[k];
					if(k!=n-1)cout << " ";
				}
				cout << endl;
		int key = v[i];
		int j = i -1;
		while(j>=0 && v[j]>key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;

	}
	for(int k=0;k<n;k++){
				cout << v[k];
				if(k!=n-1)cout << " ";
			}
			cout << endl;
	
	return 0;
}