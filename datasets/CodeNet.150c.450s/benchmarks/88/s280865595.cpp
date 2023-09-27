#include<algorithm>
#include<iostream>
using namespace std;
int H,W;

int tkj(int h,int w){
	return (h*h+w*w);
}

int main(void){
  
  while(cin>>H>>W&&H>0){
    const pair<int,int> given(tkj(H,W),H);
  pair<int,int>best(tkj(150,150),150),ans;
  for(int h=1;h<=150;h++){
    for(int w=1;w<=150;w++){
      if(w<=h)continue;
      pair<int,int>x(tkj(h,w),h);
      if(given<x&&x<best){
	best=x;
	ans=make_pair(h,w);
      }
    }
  }
  cout<<ans.first<<" "<<ans.second<<endl;
}
}