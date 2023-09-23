#include<iostream>
using namespace std;

int main(){
  int a,b,n,c1,c2;
  while(1){
    cin >> a >> b;
    if(a==0 && b==0) break;
    int mp[1111][1111]={0};
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> c1 >> c2;
      mp[c1][c2] = -1;
    }
    mp[1][1] = 1;
    for(int i=1;i<=a;i++){
      for(int j=1;j<=b;j++){
	if(mp[i][j] == -1){
	  mp[i][j] = 0;
	}
	else if(i != 1 || j != 1){
	  mp[i][j] = mp[i-1][j] + mp[i][j-1];
	} 
      }
    }
    cout << mp[a][b] << endl;
  }
}