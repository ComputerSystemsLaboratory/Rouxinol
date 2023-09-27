#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int h;
  int count=0,ans=0;
  bool update=false;
  int now,num,pos;
  while(1){
    cin >> h;
    if(h==0){
      return 0;
    }
    vector<vector<int> > field = vector<vector<int> >(h,vector<int>(5,0));
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
        cin >> field[h-i-1][j];
      }
    }
    ans=0;
    pos=0;
    while(1){
      update=false;
      for(int i=0;i<h;i++){
        num=field[i][0];
        count=1;
        pos=0;
        for(int j=1;j<5;j++){
          if(num==field[i][j]){
            count++;
          }else{
            if(count<3){
              num=field[i][j];
              pos=j;
              count=1;
            }else{
              break;
            }
          }
        }
        if(count>=3&&num!=0){
          ans+=num*count;
          for(int j=pos;j<pos+count;j++){
            field[i][j]=0;
          }
          update=true;
        }
      }
      if(!update){
        cout << ans << endl;
        break;
      }
      for(int j=0;j<5;j++){
        now=0;
        for(int i=0;i<h;i++){
          if(field[i][j]>0){
            field[now][j]=field[i][j];
            now++;
          }
        }
        for(int i=now;i<h;i++){
          field[i][j]=0;
        }
      }
    }
  }
  return 0;
}

