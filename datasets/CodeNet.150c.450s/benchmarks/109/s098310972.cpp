#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
  for(;;){
    int n;
    cin >> n;
    if(n == 0) break;
    multiset<int> slist,elist;
    for(int i=0; i<n; i++){
      int h1,h2,m1,m2,s1,s2;
      scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
      int s = h1 * 3600 + m1 * 60 + s1;
      slist.insert(s);
      int e = h2 * 3600 + m2 * 60 + s2;
      elist.insert(e);
    }
    int ret = 0, count = 0;
    multiset<int>::iterator its = slist.begin(), ite = elist.begin();
    while(its != slist.end()){
      if((*its) < (*ite)){
        count++;
        its++;
        if(count > ret) ret = count;
      }else{
        count--;
        ite++;
      }
    }
    cout << ret << endl;
  }
  return 0;
}