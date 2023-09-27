#include <bits/stdc++.h>
using namespace std;

string s;
int n,bf,r,l,cnt;

int main(){
  int i;
  while(1){
    cin >> n;
    if(n==0)break;
    cnt=0;
    bf=0;
    r=0;
    l=0;
    for(i=0;i<n;i++){
      cin >> s;
      if(s=="lu")l++;
      if(s=="ru")r++;
      if(s=="ld")l--;
      if(s=="rd")r--;
      if(l==r&&l!=bf){
	bf=l;
	cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

