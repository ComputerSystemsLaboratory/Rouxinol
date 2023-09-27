#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n[101],mx;
vector<int> ms;

int main(){
  int m;
  while(~scanf("%d",&m)){
    if(++n[m]==mx){
      ms.push_back(m);
    }else if(n[m]>mx){
      mx++;
      ms.clear();
      ms.push_back(m);
    }
  }
  sort(ms.begin(),ms.end());
  for(int i=0; i<ms.size(); i++)
    printf("%d\n",ms[i]);
}