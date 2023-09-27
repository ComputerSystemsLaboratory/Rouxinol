#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	int x = 0;
	
	cin >> a >> b;
	vector<vector<int>> vec1;
	vector<int> vec2(b);
	
	vec1 = vector<vector<int>>(a, vector<int>(b,0));
	
	
	for (int i = 0; i < a; i++){

		for(int j = 0; j < b; j++){

			cin >> vec1.at(i).at(j) ;
		}
	}
	for (int j = 0; j<b; j++){
		cin >> vec2.at(j);
	}
		
	for(int i = 0; i<a; i++){
		x = 0;
		for(int j = 0; j<b; j++){
			x =  x + vec1.at(i).at(j) * vec2.at(j);
		   
		}
		cout << x << endl;
		x = 0;
	}
}
	
