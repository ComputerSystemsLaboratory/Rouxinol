#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back
int H;
int W= 5;
int S[10][10];
int B[10][10];
int main() {
  while(true){
    cin >> H;
    if(H==0)return 0;
    int ans = 0;
    rep(i,H)
      {
	rep(j,W)
	  {
	    cin>>S[i][j];
	    
	  }
      }
  
    while(1)
      {
	 bool flag=true;
	memset(B,0,sizeof(B));
	/*rep(i,H)
	  {
	    rep(j,W)
	      {
		printf("%d ",S[i][j]);
		
	      }
	      }*/
	rep(i,H)
	  {
	    repi(j,2,W)
	      {
		if(S[i][j]!=-1 && S[i][j]==S[i][j-1] && S[i][j-1]==S[i][j-2])
		  {
		    B[i][j]=B[i][j-1]=B[i][j-2]=1;
		    flag=false;
		  }
	      }
	  }
	//printf("%d",flag);
	if(flag)break;
	rep(k,H)
	  {
	    //int k = H-i-1;
	    rep(j,W)
	      {
		if(B[k][j])
		  {
		    ans += S[k][j];
		    int p = k;
		    while(true)
		      {
			if(p==0||S[p-1][j]==-1)
			  {
			    S[p][j]=-1;
			    break;
			  }
			else
			  {
			    S[p][j]=S[p-1][j];
			    p--;
			  }
		      }
		     		   
		  }
	      }
	  }
      }
    printf("%d\n",ans);
  }
}