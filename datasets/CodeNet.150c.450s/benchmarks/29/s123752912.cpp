#include<bits/stdc++.h>
using namespace std;
struct lis{
  int d;
  lis *pr;
  lis *ne;
};
lis he;
int n;
void ins();
void del();
void delf();
void dell();
int main(){
  cin >> n;
  string ord;
  lis bu={-1,&he,&he};
  he=bu;
  for(int i=0;i<n;i++){
    
    cin >> ord;

    if(ord=="insert")ins();
    else if(ord=="delete")del();
    else if(ord=="deleteFirst")delf();
    else if(ord=="deleteLast")dell();
  }
  for(lis *i=he.ne;i!=&he;i=i->ne){
    cout << i->d ;
    if(i->ne!=&he){
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
void ins(){
  int x;
  cin >> x;
  lis *p;
  p=new lis;
  p->d=x;
  p->ne=he.ne;
  p->pr=&he;
  he.ne->pr=p;
  he.ne=p;  
}
void del(){
  int x;
  cin >> x;
  for(lis *i=he.ne;i!=&he;i=i->ne){
    if(i->d==x){
      i->pr->ne=i->ne;
      i->ne->pr=i->pr;
      free(i);
      return;
    }    
  }
}
void dell(){
  lis *i=he.pr;
  i->pr->ne=i->ne;
  i->ne->pr=i->pr;
  free(i);
}
void delf(){
  lis *i=he.ne;
  i->pr->ne=i->ne;
  i->ne->pr=i->pr;
  free(i);
}