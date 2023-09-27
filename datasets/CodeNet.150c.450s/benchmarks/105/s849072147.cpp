/*=============================================================================================================================/*
                                               Bismillahir Rahmanir Rahim

      _     ____  ___  ____   _   _  _         ___  ____   _         _     __  __
     / \   / ___||_ _|| __ ) | | | || |       |_ _|/ ___| | |       / \   |  \/  |
    / _ \  \___ \ | | |  _ \ | | | || |        | | \___ \ | |      / _ \  | |\/| |
   / ___ \  ___) || | | |_) || |_| || |___     | |  ___) || |___  / ___ \ | |  | |
  /_/   \_\|____/|___||____/  \___/ |_____|   |___||____/ |_____|/_/   \_\|_|  |_|

   _   __           __  __  __
  |_) (_  _  o__   /   (_  |_
  |_)o__)(_  || |  \__ __) |__

    ___                    _   _      _                _ _               __   ___                 _         _        _
   / __|_ _ ___ ___ _ _   | | | |_ _ (_)_ _____ _ _ __(_) |_ _  _   ___ / _| | _ ) __ _ _ _  __ _| |__ _ __| |___ __| |_
  | (_ | '_/ -_) -_) ' \  | |_| | ' \| \ V / -_) '_(_-< |  _| || | / _ \  _| | _ \/ _` | ' \/ _` | / _` / _` / -_|_-< ' \
   \___|_| \___\___|_||_|  \___/|_||_|_|\_/\___|_| /__/_|\__|\_, | \___/_|   |___/\__,_|_||_\__, |_\__,_\__,_\___/__/_||_|
                                                            |__/                           |___/


   FB: https://facebook.com/SIAsibul
   Gmail: asibulislam8@gmail.com

/*=============================================================================================================================*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef vector<pii> vii;
typedef vector<pil> vil;
typedef vector<pli> vli;
typedef vector<pll> vll;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a)  a.begin(), a.end()
#define mem(a, b)     memset(a, b, sizeof(a))
#define f0(i,n) for(int i=0;i<(n);i++)
#define f1(i,n) for(int i=1;i<=(n);i++)
#define f2(i,a,n) for(int i=(a);i<=(n);i++)
#define fr(i,n,a) for(int i=(n);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define nl "\n"


const int INF = 1e9 + 5;
const int MXN = 2e5 + 5;

ll a[201];
char s[202];
int main(){
	ll t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		f1(i, n)
			cin >> a[i];
		scanf("%s",s+1);
		for(int i=n;i;i--){
			if(a[i]==0)continue;
			int u=60;
			while(!(a[i]>>u&1))u--;
			for(int j=i-1;j;j--)
				if(a[j]>>u&1)a[j]^=a[i];
		}
		int ans=0;
		for(int i=1;i<=n;i++)
			if(s[i]=='1'&&a[i])
				ans=1;
		cout << ans << nl;
	}
}
