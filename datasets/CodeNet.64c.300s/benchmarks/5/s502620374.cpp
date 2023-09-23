//List of Top 3 Hills
#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
  for(int i=0; i<10; i++){
    int tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  sort(v.begin(), v.end(), greater<int>());
  for(int i=0; i<3; i++)
    printf("%d\n", v[i]);
  return 0;
}