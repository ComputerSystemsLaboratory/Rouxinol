#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

typedef vector <int> VI;
typedef vector <VI> VVI;
typedef vector <string> VS;
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair <int, LL> PIL;
typedef vector <PIL> VPIL;


#define each(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define sort(c) sort((c).begin(),(c).end())

#define range(i,a,b) for(int i=(a); i < (b); i++)
#define rep(i,n) range(i,0,n)

#define MAX_INT 2147483647

int main(){
	int n, s, total;
	int max_s, min_s;
	while (1){
		cin >> n;
		if (!n) break;
		total = 0; max_s = 0; min_s= 1000; 
		rep(i,n){
			cin >> s;
			total += s;
			max_s = max(s, max_s);
			min_s = min(s, min_s);
		} 
		cout << (total - max_s - min_s) / (n-2) << endl;
	}
	return 0;
}