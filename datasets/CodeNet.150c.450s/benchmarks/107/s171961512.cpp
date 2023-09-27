#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Min(int a,int b,int c){
  return min(a,min(b,c));
}

int main(){
  string X,Y;
  cin>>X>>Y;
  vector<vector<int> > v(X.size()+1,vector<int>(Y.size()+1,0));
  for(int i=0;i<=X.size();i++) v[i][0]=i;
  for(int i=0;i<=Y.size();i++) v[0][i]=i;
  for(int i=0;i<X.size();i++){
    for(int j=0;j<Y.size();j++){
      v[i+1][j+1] = Min(v[i][j]+(X[i]!=Y[j]),v[i+1][j]+1,v[i][j+1]+1);
      
    }
  }
  cout<<v[X.size()][Y.size()]<<endl;
  return 0;
}