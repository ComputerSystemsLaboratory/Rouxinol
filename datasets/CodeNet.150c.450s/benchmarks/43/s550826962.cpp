#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main()
{
	int n;
	while (1) {
		cin >> n;
		if (n == 0)return 0;
		int a, b;
		int ascore = 0, bscore = 0;
		vector<P>card;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (a > b)ascore += a + b;
			else if (b > a)bscore += a + b;
			else {
				ascore += a;
				bscore += b;
			}
		}
		cout << ascore << " "<< bscore << endl;
	}

}