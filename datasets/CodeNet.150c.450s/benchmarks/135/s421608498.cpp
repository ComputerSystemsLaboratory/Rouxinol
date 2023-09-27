#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int Nmax = 1500;

int main(){
	int n, m;
	while(cin >> n >> m && (n || m)){
		int h[Nmax+1];
		int w[Nmax+1];
		vector<int> hs;
		vector<int> ws;
		int length;
		h[0] = w[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> length;
			h[i] = h[i-1] + length;
		}
		for(int i = 1; i <= m; i++){
			cin >> length;
			w[i] = w[i-1] + length;
		}
		for(int i = 1; i <= n; i++){
			for(int j = 0; j < i; j++){
				hs.push_back(h[i] - h[j]);
			}
		}
		for(int i = 1; i <= m; i++){
			for(int j = 0; j < i; j++){
				ws.push_back(w[i] - w[j]);
			}
		}
		sort(hs.begin(), hs.end());
		sort(ws.begin(), ws.end());
		int count = 0;
		for(vector<int>::iterator iter = hs.begin();
			iter != hs.end(); iter++)
		{
			count += upper_bound(ws.begin(), ws.end(), *iter) - lower_bound(ws.begin(), ws.end(), *iter);
		}
		cout << count << endl;
	}
	return 0;
}