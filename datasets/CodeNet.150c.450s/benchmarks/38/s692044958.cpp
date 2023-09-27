//Is it a Right Triangle?
#include<bits/stdc++.h>
using namespace std;

//slope:3??°????????§???
bool judge(int slope, int x1, int x2){
  if(pow((double)slope, 2.0)==(pow((double)x1, 2.0)+pow((double)x2, 2.0))) return true;
  else return false;
}

int main(){
  int n, a, b, c;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d %d %d", &a, &b, &c);
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end(), greater<int>());
    if(judge(v[0], v[1], v[2]))printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}