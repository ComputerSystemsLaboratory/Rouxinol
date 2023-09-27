#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
	int n , q;
	int S[10000], T[500];
	int count = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++){
		scanf("%d", &S[i]);
	}
	
	cin >> q;
	for (int i = 0; i < q; i++){
		scanf("%d", &T[i]);
	}
	
	for(int j = 0; j < q;  j++){
		int i = 0;
		while (S[i] != T[j] && i < n -1) i++;
		if(i < n - 1) count ++;
	}
	
	cout << count << endl;
	
	return 0;
}