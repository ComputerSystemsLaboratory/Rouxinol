#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>

using namespace std;

int n;
string x,y;

vector<vector<int> > q(1001,vector<int>(1001,-1));

int search(int i,int j){
  int ans;
  if(i<0 || j<0) return 0;
  if(q[i][j] != -1) return q[i][j];
  if( x[i] == y[j] ){
    ans=max( {search(i-1,j-1)+1,search(i-1,j),search(i,j-1)} );
    q[i][j]=ans;
    return ans;
  }
  else{
    ans=max( search(i-1,j),search(i,j-1) );
    q[i][j]=ans;
    return ans;
  }

}


int main(void){

  cin>>n;

  for(int i=0;i<n;i++){
    cin>>x;
    cin>>y;

    for(int ix=0;ix<1001;ix++){
      for(int iy=0;iy<1001;iy++){
        q[ix][iy]=-1;
      }
    }

    search( x.size(),y.size() );
    cout << q[x.size()-1][y.size()-1] << endl;
  }



  return 0;
}

