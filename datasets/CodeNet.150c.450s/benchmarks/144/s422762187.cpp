#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

	long long a,b,c,x;
	cin >> a >> b >> c ;
	
	vector<vector<int>> vec1,vec2;
	
	vec1 = vector<vector<int>>(a, vector<int>(b, 0));
	vec2 = vector<vector<int>>(b, vector<int>(c, 0));
	
	
	for(int i=0; i<a; i++){
		for(int j = 0; j<b; j++){
			cin >> vec1.at(i).at(j);
		}
	}
	
	for(int i=0; i<b; i++){
		for(int j = 0; j<c; j++){
			cin >> vec2.at(i).at(j);
		}
	}
	
	for(int i = 0; i<a; i++){
		for(int j=0; j<c; j++){
			x=0;
			for(int k=0; k<b; k++){
				x = x + vec1.at(i).at(k)*vec2.at(k).at(j);
			}
			cout << x ;
			if (j != c-1) cout << " " ;
		}
		 cout << endl;
	}
	
}

