/* BISMILLAHIR RAHMANIR RAHIM */
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define ull       unsigned long long
#define si(x)     scanf("%d", &x)
#define sll(x)    scanf("%lld", &x)
#define ssll(x,y)    scanf("%lld %lld", &x ,&y)
#define sd(x)     scanf("%lf", &x)
#define l0(i,n)   for(ll i=0; i<n; i++)
#define MAX       100005
#define maxn 	  200002
#define pb 		  push_back
#define mk 		  make_pair
#define endl	  "\n"
#define INF 	  1000000000
#define MOD		  1000000007
#define imie(...) "[" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "



int main ()
{
		ios::sync_with_stdio(0);
		cin.tie(0);
		//CODE TONOY
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n+5];
		for (int i=0 ; i<n ; i++) scanf("%d",&a[i]);
		for (int i=0 ; i<abs(n-k) ; i++)
		{
			if(a[i]<a[i+k])
			printf("Yes\n");
			else
			printf("No\n");
		}
		return 0;  
}  
