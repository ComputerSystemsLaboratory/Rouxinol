#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> hit_anss;
  vector<int> bolor_anss;
  int nums_a[4],nums_b[4];
  while(cin>>nums_a[0]>>nums_a[1]>>nums_a[2]>>nums_a[3]){
    int hit=0,bolor=0;
    for(int i=0;i<4;i++){
      cin>>nums_b[i];
    }
    //hit????¢????
    for(int i=0;i<4;i++){
      if(nums_a[i]==nums_b[i])hit++;
    }
    //bolor????¢????
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if(i==j)continue;
        if(nums_a[i]==nums_b[j]){
          bolor++;
          break;
        }
      }
    }
    hit_anss.push_back(hit);
    bolor_anss.push_back(bolor);
  }
  for(int i=0;i<hit_anss.size();i++){
    cout<<hit_anss[i]<<' '<<bolor_anss[i]<<endl;
  }
}