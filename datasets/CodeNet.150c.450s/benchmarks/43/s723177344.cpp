#include<iostream>
#include<queue>
using namespace std;

int main(){
  int n;
  int p1,p2;
  while(1){
    cin >> n;
    if(n==0) break;
    int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
      cin >> p1 >> p2;
      if(p1 > p2){
	ans1 += p1 + p2;
      }
      else if(p1 < p2){
	ans2 += p1 + p2;
      }
      else{
	ans1 += p1;
	ans2 += p2;
      }
    }
    cout << ans1 << " " << ans2 << endl;
  }
}