#include<iostream>
#include<vector>
using namespace std;
vector<int> tr;
vector<int> ra;
int fset(int);
void uni(int,int);
void link(int,int);
int iss(int,int);
int main(){
  int n,q,f,a,b;
  cin >> n >> q;
  tr = vector<int> (n,0);
  ra = vector<int> (n,0);
  for(int i=0;i<n;i++){//mset
    tr[i]=i;
  }
  for(int i=0;i<q;i++){
    cin >> f >> a >> b;
    if(f==0){
      uni(a,b);
    }
    else{
      int ans;
      ans=iss(a,b);
      cout << ans << endl;
    }
  }
    return 0;
  }
void uni(int a,int b){
  link(fset(a),fset(b));
}
void link(int a,int b){
  if(ra[a]>ra[b]){
    tr[b]=a;
  }
  else{
    tr[a]=b;
    if(ra[b]==ra[a])ra[b]++;
  }
}
int iss(int a,int b){
  return fset(a)==fset(b);
}
int fset(int a){
  if(a!=tr[a])tr[a]=fset(tr[a]);
  return tr[a];
}