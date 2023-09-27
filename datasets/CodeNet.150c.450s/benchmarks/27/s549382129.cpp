#include<bits/stdc++.h>
using namespace std;



struct node{
  int lc;
  int rc;
  int key;
  void init(int a){
    lc=rc=-1;
    key=a;
  }
};

#define bstN 600000
struct bst{

  int size;
  node t[bstN];

  void init(){
    size=0;
  }
  
  void insert(int v){
    int i=0;
    while(i<size){
      int& child=(v<t[i].key?t[i].lc:t[i].rc);
      if(child==-1)child=size;
      i=child; 
    }
    t[size++].init(v);
  }

  void preord(int pos,vector<int> &vec){
    if(pos==-1||pos==size)return;
    preord(t[pos].lc,vec);
    vec.push_back(t[pos].key);
    preord(t[pos].rc,vec);
  }
  
  void inord(int pos,vector<int> &vec){
    if(pos==-1||pos==size)return;
    vec.push_back(t[pos].key);
    inord(t[pos].lc,vec);    
    inord(t[pos].rc,vec);
  }
};


bst T;

int main(){
  T.init();
  int n,a;
  char str[100];
  scanf("%d",&n);
  
  while(n--){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&a);
      T.insert(a);
    }else{
      vector<int> ans,ans2;
      
      T.preord(0,ans);
      for(int i:ans)cout<<' '<<i;
      cout<<endl;
      
      T.inord(0,ans2);
      for(int i:ans2)cout<<' '<<i;
      cout<<endl;
    }
  }

  return 0;
}