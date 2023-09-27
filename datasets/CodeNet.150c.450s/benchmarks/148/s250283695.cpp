#include <bits/stdc++.h>
using namespace std;


typedef pair<int, int> pi;
typedef long long ll;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpll vector<pll>
#define sq(i) (a)*(a)

int ac = 0;
int wa = 0;
int tle = 0;
int re = 0;

int main()
{

	ios_base::sync_with_stdio(0);	
	cin.tie(0);			
	cout.tie(0);	
	
	int n; cin >> n;
	rep(i, 0, n){
		
		string now;
		cin >> now;
		if(now == "AC")
		{
			ac += 1;
			
			}
		else if (now == "WA")
		{
			wa += 1;
			
			
			}
		else if (now == "TLE")
		{
			tle += 1;
			
			
			}
		else if (now == "RE")
		{
			re += 1;
			
			
			}					
		}
	cout << "AC x " << ac << endl;
	cout << "WA x " << wa << endl;
	cout << "TLE x " << tle << endl;
	cout << "RE x " << re << endl;

	
}

//upsolve here
//N = int(input())
//2 s = [input() for i in range(N)]
//3 for v in ['AC', 'WA', 'TLE', 'RE']:
//4 print('{0} x {1}'.format(v, s.count(v)))


//how the fuck is it so short?????
