#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(){

  long long int n;
  cin >>n;

  vector<int> f;

  long long int m;
  m=n;
  for(int i=2;i*i<n;i++){
    if(m%i==0){
      f.push_back(i);
      m=m/i;
      i--;
    }
    if(m==1)break;
  }

  if(m!=1)f.push_back(m);

  cout << n << ":";
  for(int i=0;i<f.size();i++){
    cout << " " << f[i];
  }
  cout << endl;

}
