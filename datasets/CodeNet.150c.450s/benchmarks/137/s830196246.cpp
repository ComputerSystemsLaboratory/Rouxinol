#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstdlib>
typedef long long ll;
using namespace std;
#define M 1020751

long long convert(string word);
void insert(long long *d,long long key);
int find_key(long long *d,long long key);
int h1(long long key);
int h2(long long key);
int main(){
  int i,n;
  cin>>n;
  string order,word;
  long long key;
  long long d[M];
  queue<string> q;
  for(i=0;i<M;i++){
    d[i]=-1;
  }
  for(i=0;i<n;i++){
    cin>>order>>word;
    key=convert(word);
    if(order[0]=='i'){
      insert(d,key);
    }else{
      int flag=find_key(d,key);
      if(flag==1){
        q.push("yes");
      }else{
	q.push("no");
      }
    }
  }
  while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
  }
}
    
long long convert(string word){
  long long i,num=0,keta=1;
  for(i=0;i<word.size();i++){
    if(word[i]=='A'){
      num+=keta;
    }else if(word[i]=='C'){
      num+=keta*2;
    }else if(word[i]=='G'){
      num+=keta*3;
    }else{
      num+=keta*4;
    }
    keta*=10;
  }
  return num;
}
void insert(long long *d,long long key){
  int h,i=1;
  h=h1(key);
  while(d[h]!=-1){
    h=(h1(key)+i*h2(key))%M;
    i++;
  }
  d[h]=key;
}
int find_key(long long *d,long long key){
  int h,i=0;
  h=h1(key);
  while(1){
    if(d[h]==-1){
      return 0;
    }else if(d[h]!=key){
      i++;
      h=(h1(key)+i*h2(key))%M;
    }else{
      return 1;
    }
  }   
}
int h1(long long key){
  return key%M;
}
int h2(long long key){
  return 1+(key%(M-1));
}