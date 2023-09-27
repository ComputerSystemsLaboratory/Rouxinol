#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
void saiki(vector<vector<bool> >& in,int x,int y,int n,int m){
  in[x][y]=0;
  //cout<<x<<" "<<y<<endl;
  loop(i,-1,2){
    loop(j,-1,2){
      if(x+i>=0&&x+i<n&&y+j>=0&&y+j<m&&in[x+i][y+j])saiki(in,x+i,y+j,n,m);
    }
  }
}
int main(){
  int n,m;
  while(cin>>m>>n,n||m){
    int co=0;
    vector<vector<bool> >in(n);
    rep(i,n){
      rep(j,m){
	bool tmp;
	cin>>tmp;
	in[i].push_back(tmp);
      }
    }
    rep(i,n){
      rep(j,m){
	if(!in[i][j])continue;
	saiki(in,i,j,n,m);
	co++;
      }
    }
    cout<<co<<endl;
  }
}