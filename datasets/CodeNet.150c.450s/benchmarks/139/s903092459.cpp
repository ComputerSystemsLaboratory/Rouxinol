#include <bits/stdc++.h>
using namespace std;

// 小数点以下桁数
// fixed << setprecision(i)

int64_t gcd(int64_t a,int64_t b){return (a%b==0?b:gcd(b, a%b));}
int64_t lcm(int64_t a,int64_t b){return a/gcd(a, b)*b;}
int factorial(int a){int b=1;while(a){b*=a--;}return b;} //13以下対応
bool is_prime(int64_t a){if(a<=1)return false;for(int64_t i=2;(int64_t)i*i<=a;i++){if(a%i==0)return false;}return true;}
int get_adp(double x, int n){return (int)round((x-(int)x)*pow(10,n))%10;} // 小数点以下の指定桁の値を取得
int64_t sigma(int64_t s, int64_t n){return n*(2*s+n-1)/2;}

//順列の全列挙
// vector<int> v(N);
// iota(v.begin(), v.end(), 1);       // v に 1, 2, ... N を設定
// do {
//	for(auto x : v) cout << x << " "; cout << "\n";     // v の要素を表示
// } while( next_permutation(v.begin(), v.end()) ); 

//bit全探索
// for (int tmp = 0; tmp < (1 << ビット数); tmp++) {
//	bitset<ビット数> s(tmp);
//	// (ビット列sに対する処理)
// }



int main()
{
	int n, m, a, b;
	
	cin >> n >> m;
	vector<set<int>> ab(n);
	vector<int> ans(n, -1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		ab[a - 1].insert(b - 1);
		ab[b - 1].insert(a - 1);
	}
	queue<int> q;
	q.push(0);
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (auto v: ab[temp])
		{
			if (ans[v] == -1)
			{
				ans[v] = temp;
				q.push(v);
			}
		}
	}
	bool flag = true;
	for (int i = 1; i < n; i++)
	{
		if (ans[i] == -1)
		{
			flag = false;
			break;
		}
	}
	cout << (flag ? "Yes" : "No") << endl;
	if (flag)
	{
		for (int i = 1; i < n; i++)
		{
			cout << ans[i] + 1 << endl;
		}
	}
}
