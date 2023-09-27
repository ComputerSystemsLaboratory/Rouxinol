
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main(){
  int W, H;
  while(cin >> W >> H && W>0 && H>0){
    int map[400];
    for(int i=0;i<400;i++)
      map[i]=0;
    int at[2];

    for(int i=0;i<H;i++){
      string s;
      cin >> s;
      for(int j=0;j<W;j++){
        map[20*i+j]=(s[j]=='.'?1:(s[j]=='@'?2:0));
        if(s[j]=='@'){
          at[0]=i; at[1]=j;
        }
      }
    }

    vector<int> list[400];  //??£??\?????????
    for(int i=0;i<400;i++){
      if(i>=20) //???
        if(map[i-20]>0) list[i].push_back(i-20);
      if(i%20>0) //???
        if(map[i-1]>0) list[i].push_back(i-1);
      if(i%20<19) //???
        if(map[i+1]>0) list[i].push_back(i+1);
      if(i<380) //???
        if(map[i+20]>0) list[i].push_back(i+20);
    }

    bool d[400];
    for(int i=0;i<400;i++) d[i]=false;

    stack<int> cur;
    cur.push(at[0]*20+at[1]);
    d[at[0]*20+at[1]]=true;

    while(!cur.empty()){
      bool flg=false;
      for(vector<int>::iterator it=list[cur.top()].begin();it!=list[cur.top()].end();it++){
        if(!d[*it]){
          flg=true;
          cur.push(*it);
          d[*it]=true;
          break;
        }
      }
      if(flg) continue;
      cur.pop();
    }

    int cnt=0;
    for(int i=0;i<400;i++)
      if(d[i]) cnt++;

    cout << cnt << endl;
  }

  return 0;  
}