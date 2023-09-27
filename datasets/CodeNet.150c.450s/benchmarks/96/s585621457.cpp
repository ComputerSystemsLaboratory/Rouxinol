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

int main(void){
	pair<int, string> deta[10];//int mod string ?????????
	deta[1] = mp(5, ".,!? ");
	deta[2] = mp(3, "abc");
	deta[3] = mp(3, "def");
	deta[4] = mp(3, "ghi");
	deta[5] = mp(3, "jkl");
	deta[6] = mp(3, "mno");
	deta[7] = mp(4, "pqrs");
	deta[8] = mp(3, "tuv");
	deta[9] = mp(4, "wxyz");
	//deta[0] = mp(0, "");

	int n; cin >> n;
	int tmp;
	rep(i, n){
		string tmp;
		cin >> tmp;
		int size = tmp.size();
		int cnt = 0;
		rep(j, size){
			//printf("j %d\n", j);
			if(tmp[j] == '0') continue;//?????????????????????????????????
	
			if(tmp[j] == tmp[j + 1]){
				cnt++;
				//printf("cnt++%d\n", cnt);
				continue;
			}
			else{
				int num = tmp[j] - '0';
				//printf("num%d\n", num);
				string moziretu = deta[num].se;
				//cout << moziretu <<endl;
				printf("%c", moziretu[cnt % deta[num].fi]);
				cnt = 0;
			}
		}
		printf("\n");
	}
	return 0;
}