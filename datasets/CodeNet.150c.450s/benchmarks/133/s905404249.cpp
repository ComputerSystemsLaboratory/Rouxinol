#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int d;
int c[26];
int s[365][26];

int t[365];

int score(){
	int last[26] = {0};
	int evl = 0;

	for( int i = 1; i <= d; i++ ){
		last[t[i-1]-1] = i;
		evl += s[i-1][t[i-1]-1];
		for( int j = 0; j < 26; j++ ){
			evl -= c[j]*(i - last[j]);
		}

		cout << evl << endl;
	}

	return evl;
}

int main(){
	cin >> d;
	for( int i = 0; i < 26; i++ ){
		cin >> c[i];
	}
	for( int i = 0; i < d; i++ ){
		for( int j = 0; j < 26; j++ ){
			cin >> s[i][j];
		}
	}

	for( int i = 0; i < d; i++ ){
		cin >> t[i];
	}

	score();

/*
	int gre;

	for( int i = 0; i < d; i++ ){
		gre = 0;
		for( int j = 0; j < 26; j++ ){
			gre = max( gre, s[i][j] );
			if( gre == s[i][j] ){
				t[i] = j + 1;
			}
		}
	}

	for( int i = 0; i < 365; i++ ){

	}


	for( int i = 0; i < d; i++ ){
		cout << t[i] << endl;
	}
*/

//	cout << "score:" << bscore << endl;

	return 0;
}
