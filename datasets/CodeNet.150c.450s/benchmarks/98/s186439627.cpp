#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		vector<int> v1, v2;
		int s1=0,s2=0;
		if(n == 0 && m == 0) break;
		for(int i = 0; i < n; i++){
			int input;
			cin >> input;
			v1.push_back(input);
			s1 += input;
		}

		for(int i = 0; i < m; i++){
			int input;
			cin >> input;
			v2.push_back(input);
			s2 += input;
		}

		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());

		const int INF (1 << 24);
		int a = INF, b = INF;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(s1 - v1[i] + v2[j] == s2 - v2[j] + v1[i] && v1[i] + v2[j] < a + b){
					a = v1[i];
					b = v2[j];
				}
			}
		}
		if(a == INF || b == INF) cout << "-1" << endl;
		else cout << a << " " << b << endl;
	}
}