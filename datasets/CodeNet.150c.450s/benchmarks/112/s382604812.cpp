#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,m;
  char judge;
  while(1){
    cin >> n;
    if(n==0) break;
    char c1[n][2];
    for(int i=0;i<n;i++){
      cin >> c1[i][0] >> c1[i][1];
    }
    cin >> m;
    char data[m];
    for(int i=0;i<m;i++){
      cin >> judge;
      for(int j=0;j<n;j++){
	if(judge == c1[j][0]){
	  judge=c1[j][1];
	  break;
	}
      }
      data[i]=judge;
    }

    for(int i=0;i<m;i++){
      cout << data[i];
    }
    cout << endl;
  }

  return 0;
}