#include <iostream>
using namespace std;

const int N = 1 << 17;
int bit[N] = {};
int n, q;

int sum(int i)
{
	int s = 0;
	while(i > 0){
		s += bit[i];
		i -= i & (-i);
	}
	return s;
}

void add(int i, int x)
{
	while(i <= n){
		bit[i] += x;
		i += i & (-i);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> n >> q;
	
	int c, x, y;
	for(int i = 0; i < q; ++i){
		cin >> c >> x >> y;
		if(c == 0){
			add(x, y);
		}
		else {
			if(x == 0)
				cout << sum(y);
			else
				cout << sum(y) - sum(x - 1);
			cout << endl;
		}
	}
	
	return 0;
}