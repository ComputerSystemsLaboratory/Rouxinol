#include<bits/stdc++.h>
using namespace std;

int ans[4], in[4];

int main(){
  int a, b, c, d;
  while(cin >> a >> b >> c >> d){
    int hit=0, blow=0;
    ans[0]=a; ans[1]=b; ans[2]=c; ans[3]=d;
    cin >> in[0] >> in[1] >> in[2] >> in[3];
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(ans[i]==in[j]){
          if(i==j) hit++;
          else blow++;
        }
      }
    }
    cout << hit << ' ' << blow << endl;
  }

  return 0;
}