#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solve(vector<vector<int> > a, int r, int c,bool rc[]){
	for(int i=0;i<r;++i){
		if(rc[i]==true)
			for(int j=0;j<c;++j) a[i][j]=(a[i][j]==1)?0:1;
	}
	int ret=0;
	for(int i=0;i<c;++i){
		int sum=0;
		for(int j=0;j<r;++j){
			sum+=a[j][i];
		}
		ret+=(sum>r/2)?sum:r-sum;
	}
	return ret;
}

int main(void){
  int r,c;
  while(cin>>r>>c,r||c){
    vector<vector<int> > a(r);
    for(int i=0;i<r;++i){
      a[i]=vector<int>(c);
    }
    for(int i=0;i<r;++i){
      for(int j=0;j<c;++j) cin>>a[i][j];
    }
    bool rc[r];
    int ans=0;
    for(int i=0;i<(1<<r);++i){
    	int b=i;
    	bool rc[r];
    	for(int j=0;j<r;++j){
    		rc[j]=(b%2)?true:false;
    		b/=2;
    	}
    	int t=solve(a,r,c,rc);
    	ans=max(t,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}