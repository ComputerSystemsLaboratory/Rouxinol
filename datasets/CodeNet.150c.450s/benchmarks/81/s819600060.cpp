#include <iostream>
#include <limits.h>
using namespace std;
#define REP(i,N) for(int i=0;i<N;i++)
 
int main(){
	int n,a,b,c;
	int mi,mx,t_num,now;
 
	int t[10][10];
	while(cin >> n && n){
		/*ú»*/
		REP(i,10)
		 REP(j,10)
		  if(i!=j)t[j][i] = INT_MAX/2; //WFÌZpI[o[t[h~
		  else t[i][j]=0;
		mx=0;mi=INT_MAX;
 
		/*üÍ*/
		REP(i,n){
			cin >> a >> b >> c;
			t[a][b]=t[b][a]=c;
			mx = max(mx,max(a,b)); //XÌÅåðmxÉãü
		}
 
		/*S_ÎÅZoHðßé([VtCh@)*/
		REP(k,mx+1) // k<mx+1 Í k<=mxÆ¿ (®¾©ç)
		 REP(i,mx+1)
		  REP(j,mx+1)
		   t[i][j]=t[j][i]=min(t[i][k]+t[k][j],t[i][j]);
 
		/*S_ÔË»Ìn_ÖÌ£aªÅà¬³¢àÌðL^*/
		REP(i,mx+1){
			now=0;
			REP(j,mx+1)now+=t[j][i];
			if(mi>now){
				t_num=i;
				mi=now;
			}
		}
 
		/*oÍ*/
		cout << t_num << " " << mi << endl;
	}
}