#include <iostream>

int data[10001];
int rank[10001];

int find(int x){
  if(data[x] == x){
    return x;
  }else{
    data[x] = find(data[x]);
    return data[x];
  }
}

void Union(int x,int y){
  int a = find(x);
  int b = find(y);
  if(a != b){
    if(rank[a] > rank[b]){
      data[b] = a;
      rank[a]++;
    }else{
      data[a] = b;
      rank[b]++;
    }
  }
}

bool Some(int x,int y){
  return find(x) == find(y);
}

int main(){
  int n, q, com, x, y;
  std::cin >> n >> q;
  for(int i=0;i<=n;i++){
    data[i]=i;
  }
  while(std::cin >> com >> x >> y){
    if(com){
      std::cout<< Some(x,y) << std::endl;
    }else{
      Union(x,y);
    }
  }
  return 0;
}