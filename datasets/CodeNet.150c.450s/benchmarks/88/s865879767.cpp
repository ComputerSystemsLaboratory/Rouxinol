#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

typedef pair<int,int> P;

int main(){
  int h,w,answ;
  P ans,input;

  while(cin >> h >> w,h||w){
    input = P(h*h+w*w,h);
    ans = P(-1,-1);
    for(int i=1;i<=150;i++){
      for(int j=i+1;j<=150;j++){
	P tmp = P(i*i+j*j,i);
	if(input < tmp){
	  if(ans.first < 0 || tmp < ans){
	    ans = tmp;
	    answ = j;
	  }
	}
      }
    }

    cout << ans.second << " " << answ << endl;
  }
}