#include<iostream>
#include<vector>
using namespace std;

int get_square(int x){
  return x*x;
}
int main(){
  vector<int> area_anss;
  int d;
  while(cin>>d){
  int area=0;
  for(int i=1;i<600/d;i++){
    area=area+get_square(i*d)*d;
    }
  area_anss.push_back(area);
  }
  for(int i=0;i<area_anss.size();i++){
    cout<<area_anss[i]<<endl;
  }
}