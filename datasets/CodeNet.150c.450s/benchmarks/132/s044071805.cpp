#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main(){
  int n,p;
  while(1){
    cin >> n >> p;
    if(n == 0 && p == 0) break;
    int stone[55]={0};
    int now = 0,np = p;
    while(1){
      if(np == 0){
	int *idx = max_element(stone,stone+n);
	if((*idx) == p){
	  cout << idx - stone << endl;
	  break;
	}
	np = stone[now];
	stone[now] = 0;
      } else {
	np--;
	stone[now]++;
      }
      now = (now + 1)%n;
    }
  }
}