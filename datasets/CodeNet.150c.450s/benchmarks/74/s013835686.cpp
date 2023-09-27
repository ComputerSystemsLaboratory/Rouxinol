#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int result,i,j,n,m,c[21],t[50001];  
  
  cin >> n >> m;

  for(i = 0; i < m; i++){
    cin >> c[i];
  }
 
  for(j = 0; j <= n; j++){
    t[j]=10001;
  }
  
  t[0]=0;
  
  for(i = 0; i < m; i++){
    for(j = c[i]; j <= n; j++){
      t[j]=min(t[j],t[j-c[i]]+1);
      // cout <<"j" << j << " " << "t[" << j << "]" <<"=" << t[j] << " ";
    }
    //  cout << endl;
  }  
 
  result = t[n];

  cout << result << endl;
  
  return 0;
}