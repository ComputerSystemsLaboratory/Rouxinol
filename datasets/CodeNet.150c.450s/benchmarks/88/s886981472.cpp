#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define f first
#define s second

using namespace std;

typedef pair<int,int> P;
typedef pair<double,P> P3;

int main(void){

  vector<P3>v;
  for(int h=1;h<200;h++){
    for(int w=1;w<200;w++){
      if(w>h)v.push_back(P3(sqrt(h*h+w*w),P(h,w)));
    }
  }
  
  sort(v.begin(),v.end());
  
  int h,w;
  while(cin >> h >> w,h|w){
    for(int i=0;i<v.size();i++){
      if(v[i].s.f==h && v[i].s.s==w){
	cout << v[i+1].s.f << " " << v[i+1].s.s << endl;
	break;
      }
    }
  }
  return 0;
}