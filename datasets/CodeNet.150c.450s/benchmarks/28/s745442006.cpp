#include <bits/stdc++.h>
#define ll long long
#define INF 999999999
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100000;
int w[MAX_N];


bool possible(ll P,int n,int k)
{
	ll nsum=0;
	int pos=0;
	int i=0;
	while(i < k && pos < n){
		if(nsum + w[pos] <= P){
			nsum += w[pos];
			pos++;
		}else{
			nsum=0;
			i++;
		}	
	}
	if(i < k){
		return true;
	}else{
		return false;
	}
}

int main()
{
	int n,k;
	int maxw=0,sumw=0;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		scanf("%d",&w[i]);
		maxw = max(maxw,w[i]);
		sumw += w[i];
	}
	ll high = (ll)maxw*n/k+1; //??????true
	ll low = sumw/k-1; //??????false
	//true??¨??????????°????P???????????¢?´¢??§?±???????
	while(1){
		ll mid = (high+low)/2;
		if(mid == low){
			break;
		}
		if(possible(mid,n,k)){
			high = mid;
		}else{
			low = mid;
		}
	}
	cout << high << "\n";
}