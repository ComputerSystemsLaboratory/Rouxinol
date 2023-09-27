#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int n, m, i, j, door, who;
	vector<string> u, t;
	string s;
	
	door = 0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> s;
		u.push_back(s);
	}
	cin >> m;
	for(j=0;j<m;j++){
		cin >> s;
		who = -1;
		for(i=0;i<n;i++) if(s == u[i])who = i;
		if(who >= 0){
			if(!door) cout << "Opened by " << u[who] << endl;
			else cout << "Closed by " << u[who] << endl;
			door = 1 - door;
		}
		else cout << "Unknown " << s << endl;
	}
	return 0;
}