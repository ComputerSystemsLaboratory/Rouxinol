#include<iostream>
#include<map>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
  map<char,char> mp;
  int n,m;
  char od,nw;

  while(1){
    
    mp.clear();

    scanf("%d",&n);
    if(n == 0)break;
    while(n--){
      scanf(" %c %c",&od,&nw);
      mp[od] = nw;
    }

    scanf(" %d",&m);
    char ans[m];
    for(int i = 0;i < m;i++){
      scanf(" %c",&od);
      if(mp.find(od) != mp.end()){  //map内を検索する
        ans[i] = mp[od]; //あったとき
      }else{
        ans[i] = od; //なかったとき
      }
    }
    
    for(int i = 0;i < m;i++)printf("%c",ans[i]);
    printf("\n");
  }
}