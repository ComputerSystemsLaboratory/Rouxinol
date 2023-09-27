#include<iostream>
#include<algorithm>
using namespace std;

typedef struct trie Trie;

struct trie{
  bool flag;
  Trie* next[4];

  trie(){
    flag=false;
    fill(next,next+4,(trie*)0);
  }
};

int judge(const char c){
  int ret;
  switch(c){
  case 'A':
    ret=0;
    break;
  case 'C':
    ret=1;
    break;
  case 'G':
    ret=2;
    break;
  case 'T':
    ret=3;
    break;
  }
  return ret;
}

bool str_find(string str,Trie* tmp){
  bool flag=true;
  int ind;
  
  for(int i=0;i<(int)str.length();i++){
    ind=judge(str[i]);
    
    if(!tmp->next[ind]){
      flag=false;
      break;
    }
    tmp=tmp->next[ind];
  }
  if(!tmp->flag)
    flag=false;

  return flag;
}

void str_insert(string str,Trie* tmp){
  int ind;
  
  for(int i=0;i<(int)str.length();i++){
    ind=judge(str[i]);
    
    if(!tmp->next[ind])
      tmp->next[ind]=new Trie;
    tmp=tmp->next[ind];
  }
  tmp->flag=true;
}

int main(int argc,char* argv[]){
  std::ios_base::sync_with_stdio(false);
  
  int n;
  string str;
  Trie root;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;

    if(str[0]=='i'){
      cin>>str;
      str_insert(str,&root);
    }
    else{
      cin>>str;
      if(str_find(str,&root))
	cout<<"yes"<<endl;
      else
	cout<<"no"<<endl;
    }
  }
  return 0;
}