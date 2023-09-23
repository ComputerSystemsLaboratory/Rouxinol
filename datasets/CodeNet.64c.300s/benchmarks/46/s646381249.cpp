#include <iostream>
using namespace std;

const int MAX_N = 1000010;

// is_p[i] := i ツつェツ素ツ青板づ個づ?つォ true
bool is_p[MAX_N+1] = {false,false};

// ツエツδ可トツスツテツネツスツづ個づ督づゥツつ「
void sieve(){
	for(int i = 2 ; i <= MAX_N ; i++ )
		is_p[i] = true;
	for(int i = 2 ; i*i <= MAX_N ; i++ ){
		if( is_p[i] ){
			for(int j = i+i ; j <= MAX_N ; j += i ){
				is_p[j] = false;
			}
		}
	}
}

int main(){
	int a, d, n;
	sieve();
	while( cin >> a >> d >> n, a || d || n ){
		int cnt = 0, ans;
		for(int i=a ; ; i += d ){
			if( is_p[i] ){
				cnt++;
				if( cnt == n ){
					ans = i;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}