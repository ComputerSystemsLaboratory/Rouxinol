// #include <algorithm>
#include <stdio.h>
#include <vector> 
#include <math.h>
using namespace std;

vector<int> parent;
vector<int> Rank;

void makeSet(int x){
  parent.push_back(x);
  Rank.push_back(0);
}
int findSet(int x){
  if( x != parent[x] ){
    parent[x] = findSet(parent[x]);
  }
  return parent[x];
}
void link(int x, int y){
  if( Rank[x] > Rank[y] ){
    parent[y] = x;
  }else{
    parent[x] = y;
    if( Rank[x] == Rank[y] ){
      Rank[y] = Rank[y] + 1;
    }
  }
}

void unite(int x, int y){
  link(findSet(x), findSet(y));
}

int same(int x, int y){
  if(findSet(x)==findSet(y)){
    return 1;
  }
  return 0;
}

int main(){
  int n, q;
  scanf("%d %d" ,&n ,&q);
  for( int i = 0 ; i < n ; i++ ){
    makeSet(i);
  }
  for( int i = 0 ; i < q ; i++ ){
    int com, x, y;
    scanf("%d %d %d" ,&com ,&x ,&y );
    if(com == 0){
      unite(x ,y);
    }else{
      printf("%d\n" ,same(x ,y));
    }
  }

  return 0;
}

