#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int main(){
	int hako[10];
	REP(i,10)cin >> hako[i];
	sort(hako,hako+10);
	reverse(hako,hako+10);
	REP(i,3)cout << hako[i] << endl;
	return 0;
}