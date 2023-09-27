#include <iostream>
using namespace std;
int main(){
  int s[6];
  int p[6][6] = {{0,3,5,2,4,0},{4,0,1,6,0,3},{2,6,0,0,1,5},{5,1,0,0,6,2},{3,0,6,1,0,4},{0,4,2,5,3,0}};
  int a,b,n;

  for(int i=0;i<6;i++) cin>>s[i];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    for(int j=0;j<6;j++){
      if(a==s[j]) a=j;
      if(b==s[j]) b=j;
    }
    cout<<s[p[a][b]-1]<<endl;
  }
  return 0;
}