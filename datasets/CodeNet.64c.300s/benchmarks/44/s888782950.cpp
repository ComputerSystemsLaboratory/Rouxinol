#pragma comment(linker, "/STACK:102400000,102400000")
#include <bits/stdc++.h>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF = 0x3f3f3f3f;
const int maxn = 1e2+5;
const int mod = 1e6;
const double eps = 1e-8;
const double pi = asin(1.0)*2;
const double e = 2.718281828459;
bool Finish_read;
template<class T>inline void read(T &x){Finish_read=0;x=0;int f=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;if(ch==EOF)return;ch=getchar();}while(isdigit(ch))x=x*10+ch-'0',ch=getchar();x*=f;Finish_read=1;}

int n;
int a, b, c;
int ans;
int city;
int num;
int plat[maxn][maxn];
int sum[maxn];

inline int max(int a, int b, int c) {
	return max(max(a, b), c);
}

void Floyd() {
	for (int k = 0; k <= num; ++k) {
		for (int i = 0; i <= num; ++i) {
			for (int j = 0; j <= num; ++j) {
				if (i == j) {
					plat[i][j] = 0;
					continue;
				}
				plat[i][j] = min(plat[i][j], plat[i][k] + plat[k][j]);
			}
		}
	}
}

int main(int argc, char *argv[]) {
//#ifndef ONLINE_JUDGE
//	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
//#endif
	while (~scanf("%d", &n), n) {
		mem(plat, INF);
		num = 0;
		for (int i = 1; i <= n; ++i) {
			read(a); read(b); read(c);
			plat[a][b] = c;
			plat[b][a] = c;
			num = max(num, a, b);
		}
		Floyd();
		mem(sum, 0);
		ans = INF;
		for (int i = 0; i <= num; ++i) {
			for (int j = 0; j <= num; ++j) {
				sum[i] += plat[i][j];
			}
			if (sum[i] < ans) {
				ans = sum[i];
				city = i;
			}
		}
		printf("%d %d\n", city, ans);
	}
//#ifndef ONLINE_JUDGE
//	fclose(stdin);
//	fclose(stdout);
//	system("gedit out.txt");
//#endif
    return 0;
}

