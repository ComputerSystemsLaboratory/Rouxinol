#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,to) for(int i=x;i<to;i++) 
  
int main() {
    long long n,m,l,a[100][100],b[100][100],ans[100][100]={};
    cin >> n >> m >> l;
    rep(i,0,n){
        rep(j,0,m){
            cin >> a[i][j];
        }
    }
    rep(i,0,m){
    	rep(j,0,l){
    	 cin >> b[i][j];
    	}
    }
   
    rep(i,0,n){
        rep(j,0,m){
        	rep(k,0,l){
        		ans[i][k] += a[i][j]*b[j][k]; 	
        	}
        }
    }
     
     rep(i,0,n){
	rep(j,0,l){
		if(j!=l-1) cout << ans[i][j] << " ";
		else cout << ans[i][j];
	}
	cout << endl;
    }
    return 0;
}
