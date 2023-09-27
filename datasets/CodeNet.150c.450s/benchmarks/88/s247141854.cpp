#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  vector<pair<int, pair<int, int> > > v;
  int x, y, z;
  
  for(int i=1;i<=150;i++)
    for(int j=1+i;j<=150;j++)
      v.push_back(make_pair(i*i+j*j, make_pair(i, j)));
 
  sort(v.begin(), v.end());
  /* for ( int i = 0; i < v.size(); i++ ){
    cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }*/
  
  while(1){
    int h,w,mem;
    scanf("%d%d",&h,&w);
    if(h==0 & w==0) break;
    for(int i=0;;i++){
      if((h*h+w*w)==v[i].first && v[i].second.first==h && v[i].second.second==w){
	mem=i;
	break;
      }
    }
    printf("%d %d\n",v[mem+1].second.first,v[mem+1].second.second);
  }
  return 0;
}