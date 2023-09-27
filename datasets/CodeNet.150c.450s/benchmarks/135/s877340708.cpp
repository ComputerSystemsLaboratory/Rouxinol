#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n, m, h[1501], w[1501], s, t;
	
	while(cin>>n>>m && (n+m)){
		map<int,int> hmp1;
		map<int,bool> hmp2;
		
		for(int i = 0; i < n; i++){
			cin >> h[i];
		}
		for(int j = 0; j < m; j++){
			cin >> w[j];
		}
		
		for(int i = 0; i < n; i++){
			s = h[i];
			if(hmp2[s]){
				hmp1[s]++;
			} else {
				hmp2[s] = true;
				hmp1[s] = 1;
			}
			for(int j = i+1; j < n; j++){
				s += h[j];
				if(hmp2[s]){
					hmp1[s]++;
				} else {
					hmp2[s] = true;
					hmp1[s] = 1;
				}
			}
		}
		
		t = 0;
		for(int i = 0; i < m; i++){
			s = w[i];
			if(hmp2[s]){
				t += hmp1[s];
			}
			for(int j = i+1; j < m; j++){
				s += w[j];
				if(hmp2[s]){
					t += hmp1[s];
				}
			}
		}
		
		cout << t << endl;
	}
	
	return 0;
}