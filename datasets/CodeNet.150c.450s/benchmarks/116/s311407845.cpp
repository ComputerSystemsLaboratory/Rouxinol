#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>

#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

static const int DAT_SIZE = 1<<18;
typedef long long ll;

ll data[DAT_SIZE], datb[DAT_SIZE];

void add(ll a, ll  b, ll x, ll  k, ll  l, ll  r){
    
    if(a <= l && r <= b){
        data[k] += x;
    }
    else if(l < b && a < r){
        datb[k] += (min(b, r) - max(a, l)) * x;
        add(a, b, x, k*2+1, l, (l+r)/2);
        add(a, b, x, k*2+2, (l+r)/2, r);
    }
}

ll sum(ll  a, ll  b, ll  k, ll  l, ll  r){
    
    if(b <= l || r <= a){
        return 0;
    }
    else if(a <= l && r <= b){
        return data[k] * (r-l) + datb[k];
    }
    else{
        ll res = (min(b, r) - max(a, l)) * data[k];
        res += sum(a, b, k*2+1, l, (l+r)/2);
        res += sum(a, b, k*2+2, (l+r)/2, r);
        return res;
    }
}

int main(){
    
	int n, k;
	
	while(cin >> n >> k, (n||k)){
    	
		CLR(data);
		CLR(datb);

	    for(int i=0; i<n; ++i){
			int a;
			scanf("%d", &a);
  			add(i, i+1, a, 0, 0, n);
		}
    
		ll ma = LLONG_MIN;

		for(int i=0; i<n-k; ++i){ 
			ma = max(ma, sum(i, i+k, 0, 0, n));
   	 	}
   	 
		cout << ma << endl;
	}

    return 0;
}