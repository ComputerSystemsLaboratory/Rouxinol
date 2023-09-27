/*string??¨set*/
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)

void slove(void){
	set<string> S;
	string s;
	cin >> s;
	int size = s.size();
	reps(i, 1, size){//??????????????????????????§?????????
		string s1, s2, revs1, revs2;
		rep(j, i) s1 += s[j];//????????¨???
		reps(j, i, size) s2 += s[j];//????????¨???
		for (int j = i - 1; j >= 0 ; --j) revs1 += s[j];//?????????ver
		for (int j = size - 1; j >= i ; --j) revs2 += s[j];//?????????ver
		//cout << i << s1 << endl << s2 << endl << revs1 << endl << revs2 << endl;
		//?????????????????????????????????
		S.insert(s1 + s2);
		S.insert(s2 + s1);
		S.insert(s1 + revs2);
		S.insert(revs2 + s1);
		S.insert(revs1 + s2);
		S.insert(s2 + revs1);
		S.insert(revs1 + revs2);
		S.insert(revs2 + revs1);
	}
	cout << S.size() << endl;
	return;
}

int main(void){
	int n;
	cin >> n;
	rep(i, n) slove();

	return 0;
}