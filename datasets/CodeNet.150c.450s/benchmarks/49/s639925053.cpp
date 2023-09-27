#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long LL;
#define rep(i ,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define all(v) (v).begin(),(v).end()

typedef vector<int> vi;


int main(){
	int n;
	while (cin >> n){
		if (n == 0) break;
		vi score;
		int s;
		rep(i, n){
			cin >> s;
			score.push_back(s);
		}
		sort(all(score));
		int ans = 0;
		for (int i = 1; i < n - 1; i++){
			ans += score[i];
		}
		cout << ans / (n - 2) << endl;
	}
	return 0;
}