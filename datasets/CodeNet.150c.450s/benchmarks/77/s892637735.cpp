#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , m;
	while(cin>>n , n){
		bool field[21][21]={false};
		vector< pair<int,int> > v(n);
		
		for(int i=0;i<n;++i){
			cin >> v[i].first >> v[i].second;
		}
		cin >> m;
		vector< pair<char,int> > o(m);
		for(int i=0;i<m;++i){
			cin >> o[i].first >> o[i].second;
		}
		int px=10, py=10;
		for(int i=0;i<m;++i){
			switch(o[i].first){
				case 'N':
				for(int j=0;j<o[i].second+1;++j){
					field[px][py+j]=true;
				}
				py+=o[i].second;
				break;
				case 'E':
				for(int j=0;j<o[i].second+1;++j){
					field[px+j][py]=true;
				}
				px+=o[i].second;
				break;
				case 'S':
				for(int j=0;j!=-o[i].second-1;--j){
					field[px][py+j]=true;
				}
				py-=o[i].second;
				break;
				case 'W':
				for(int j=0;j!=-o[i].second-1;--j){
					field[px+j][py]=true;
				}
				px-=o[i].second;
				break;
			}
		}
		bool b=true;
		
		for(int i=0;i<n;++i){
			if(!field[v[i].first][v[i].second]) {
				b=false;
				break;
			}
		}
		cout << (b ? "Yes" : "No") << endl;
	}
	return 0;
}