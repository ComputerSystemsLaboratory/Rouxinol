#include<iostream>
#include<vector>
using namespace std;

int main(void){
  vector<int> a(4);
  vector<int> b(4);

  while(cin>>a[0]){
    int va[10] = {0};
    int vb[10] = {0};
    va[--a[0]]++;
    for(int i = 1 ; i < 4 ; i ++){
      cin>>a[i];
      va[--a[i]]++;
    }
    int hit = 0;
    for(int i = 0 ; i < 4 ; i ++){
      cin>>b[i];
      if(a[i] + 1 == b[i]){
	hit++;
      }
      vb[--b[i]]++;
    }
    int blow = 0;
    for(int i = 0 ; i < 10 ; i ++){
      blow += min(va[i],vb[i]);
    }
    cout<<hit<<" "<<blow-hit<<endl;
  }
}