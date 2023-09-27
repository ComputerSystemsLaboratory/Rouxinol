#include <iostream>
struct node{int k,p,l,r;};
node t[500010];
using namespace std;
void find(int now,int k,int ori){
  if(k<t[now].k){
    if(t[now].l) find(t[now].l,k,ori);
    else {
      t[ori].k=k;
      t[ori].p=now;
      t[now].l=ori;
      return;
    } 
  } else {
    if(t[now].r) find(t[now].r,k,ori);
    else {
      t[ori].k=k;
      t[ori].p=now;
      t[now].r=ori;      
      return;
    }
  }
}
string fi(int now,int k){
  if(t[now].k==k) return "yes";
  else if(k<t[now].k){
    if(t[now].l) return fi(t[now].l,k);
    else return "no";
  } else {
    if(t[now].r) return fi(t[now].r,k);
    else return "no";
  } 
}
void pr(int now){
  cout<<" "<<t[now].k;
  if(t[now].l) pr(t[now].l);
  if(t[now].r) pr(t[now].r);
}
void in(int now){
  if(t[now].l) in(t[now].l);
  cout<<" "<<t[now].k;
  if(t[now].r) in(t[now].r);
}
int main(){
  int tmp,n;
  string s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=="insert"){
      cin>>tmp;
      if(i) find(0,tmp,i);
      else t[i].k=tmp;
    } else if(s=="print"){
      in(0);
      cout<<endl;
      pr(0);
      cout<<endl;
    } else {
      cin>>tmp;
      cout<<fi(0,tmp)<<endl;
    }
  }
  return 0;
}