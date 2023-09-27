#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  int q;
  cin>>q;
  while(q--){
    string X,Y;
    cin>>X>>Y;
    vector<vector<int> > v(X.size()+1,vector<int>(Y.size()+1,0));
    for(int i=0;i<X.size();i++){
      for(int j=0;j<Y.size();j++){
	if(X[i] == Y[j]){
	  v[i+1][j+1] = v[i][j]+1;
	}else{
	  v[i+1][j+1] = max(v[i+1][j],v[i][j+1]);
	}
      }
    }
    cout<<v[X.size()][Y.size()]<<endl;
  }
  return 0;
}