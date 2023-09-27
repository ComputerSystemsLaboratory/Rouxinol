#include<iostream>
using namespace std;
int main(){
  int m,n1,n2;
  cin >> m >> n1 >> n2;
  while(m||n1||n2){
    int g=n1-1;
    int i,j,k;
    int d[300]={};
    for(i=0;i<m;i++) cin >> d[i];
    for(i=n1-1;i<n2;i++) {
      if(d[i]-d[i+1]>=d[g]-d[g+1]) g=i;
      //cout << g+1 << endl;
    }
    cout << g+1 << endl;
    //cout << endl;
    cin >> m >> n1 >> n2;
  }
  return 0;
}