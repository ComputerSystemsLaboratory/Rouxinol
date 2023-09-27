#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1000000
#define MAX 1000000

int main(){
	vector <int> v(200);
	for(int i = 0; i < 200; i++)
		v[i] = i * (i + 1) * (i + 2) / 6;
	
	vector <int> d(MAX + 1, INF);
	vector <int> d2(MAX + 1, INF);
	
	d[0] = d2[0] = 0;
	for(int i = 1; i <= MAX; i++){
		for(int j = 0; v[j] <= i; j++){
			d[i] = min(d[i], d[i - v[j]] + 1);
			if(v[j] % 2 != 0)
				d2[i] = min(d2[i], d2[i - v[j]] + 1);
		}
	}
	
	while(1){
		int s;
		cin >> s;
		
		if(s == 0)
			break;
		
		
		
		
		cout << d[s] << " " << d2[s] << endl;
	}
	
	return 0;
}