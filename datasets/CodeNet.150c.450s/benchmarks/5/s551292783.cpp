#include<stdio.h>
#include<vector>
int n;
std::vector<int> data;
void proc(){
  auto end=data.rend();
  for(auto it=data.rbegin();it!=end;){
    printf("%d",*it);
    if(++it!=end)printf(" ");
  }
  printf("\n");
}

void input(){
  int x;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&x);
    data.push_back(x);
  }
}

int main(){
  input();
  proc();
}