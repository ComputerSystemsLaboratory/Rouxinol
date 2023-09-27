#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int ary[22][22];

int main(){ _;
  int n,m,x,y,l;
  char d;
  while(cin>>n,n!=0){
    REP(i,22)REP(j,22) ary[i][j]=0;
    REP(i,n){
      cin>>x>>y;
      ary[x][y]=1;
    }
    cin>>m;
    int count=0;
    int posX=10,posY=10;
    REP(i,m){
      cin>>d>>l;
      REP(j,l){
	if(d=='N'){
	  posY++;
        }else if(d=='E'){
	  posX++;
        }else if(d=='S'){
	  posY--;
        }else{
	  posX--;
        }
	if(ary[posX][posY]==1){
	  ary[posX][posY]--;
	  count++;
	}
      }
    }
    cout<<(count==n?"Yes":"No")<<endl;
  }
}