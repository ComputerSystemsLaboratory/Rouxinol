// round robin


#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
// [name,time]
pair<string,int> process[100010];
queue<pair< string,int> > Q;
queue<pair< string,int> > Ans;
pair<string,int> temp;
int time0;
int main(){
  int n,q,b;
  string a;
  cin >> n >> q;
  for (int i=0; i<n; i++){
    cin >> a >> b;
    process[i] = make_pair(a,b);
    Q.push(process[i]);
  }
  while(!Q.empty()){
    temp = Q.front();
    Q.pop();
    if (temp.second <= q){
      time0 += temp.second;
      temp.second = time0;
      Ans.push(temp);
    }else{
      time0 += q;
      temp.second -= q;
      Q.push(temp);
    }
  }
  for (int i=0; i<n; i++){
    cout << Ans.front().first << " " << Ans.front().second << endl;
    Ans.pop();
  }
}