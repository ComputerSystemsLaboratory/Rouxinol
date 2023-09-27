#include<bits/stdc++.h>
using namespace std;
 
signed main(){
  int  a;
  scanf("%d",&a);
  bool b;
  for(int f=3;f<=a;f++){
      b=false;
  if(f%3==0)b=true;
  string c=to_string(f);
  for(char d:c){
      if(d=='3')b=true;
      }
      if(b)printf(" %d",f);
      }
      printf("\n");
}