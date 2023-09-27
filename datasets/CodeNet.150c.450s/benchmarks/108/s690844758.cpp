#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int> > qu;
vector<int> v[111];
int root;
int b;
int d[111];
pair<int, int> pa;
int g;

void wide(int num){

  memset(d,-1,sizeof(d));
  d[num] = 0;
  qu.push(make_pair(num,d[1]));

  while(!qu.empty()){

    pa = qu.front();
    qu.pop();
    int id = pa.first;

    for(int i = 0; i < (int)v[id].size(); i++){
      if(d[v[id][i]] == -1){
	d[v[id][i]] = pa.second + 1;
	qu.push(make_pair(v[id][i],d[v[id][i]]));
      }
    }
  }
  for(int i = 1; i <= g; i++){
    cout << i << " " << d[i] << endl;
  }

}

int main(){

 
  cin >> g;
  int n;
  for(int i = 0; i < g; i++){
    cin >> n >> b;
    for(int j = 0; j < b; j++){
      cin >> root;
      v[n].push_back(root);
    }
  }

  wide(1);

}