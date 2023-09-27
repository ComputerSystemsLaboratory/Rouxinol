#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  for (int k=0;k<n;k++){
    string x,y;
    cin >> x >> y;
    int p=x.size();
    int q =y.size();
    int l[1001][1001] = {};
    for(int i=1;i<p+1;i++){
      for(int j=1;j<q+1;j++){
	if(x[i-1] == y[j-1] ){
	  l[i][j] = 1+l[i-1][j-1];
	}else{
	  l[i][j]= max(l[i-1][j],l[i][j-1]);
	}
      }
    }
    cout << l[p][q] << endl;
  }
}