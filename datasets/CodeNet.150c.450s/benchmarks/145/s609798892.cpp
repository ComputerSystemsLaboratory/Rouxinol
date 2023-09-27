#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
using namespace std;

char str[1100][34];
int  len[1100];
int n ;


string ans1 ="";

map<string,int> mp ;
void init_map(){
     mp.clear();
    for(int i=1;i<=n;i++){
        mp[str[i]] = 0 ;
    }
    for(int i=1;i<=n;i++){
       mp[str[i]]++;
    }
    int l =0;
    for( map<string,int>::iterator it = mp.begin();it!= mp.end();it++){
        if((it->second)>l){
	   ans1 = it->first;
	   l = it->second;
	}
    }            
}
int main(){
  int idx =1;
  while(~scanf("%s",str[idx])){
      len[idx] = strlen(str[idx]);
      idx ++;	
      
  }
   n = idx-1;
   init_map();
   cout << ans1<<" ";
    int l = 0;
    int maxidx  =0 ;
   for(int i=1;i<=n;i++){
      if(len[i]>l){
         maxidx = i;
	 l = len[i];
      }
   }
   cout << str[maxidx]<<endl;
 return 0;
}