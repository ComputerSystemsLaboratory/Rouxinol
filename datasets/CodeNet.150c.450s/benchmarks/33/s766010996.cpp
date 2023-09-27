#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

typedef pair<double,double> pdd;

int calc(int x,int p){
  return p*(100+x)/100;
}

int main(void){

  double x,y;
  int s;

  while(cin >> x >> y >> s){
    if(x==0 && y==0 && s==0)break;

    vector<pdd>v;

    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
	int res=calc(x,i)+calc(x,j);
	if(res == s)v.push_back(pdd(i,j));
      }
    }

    int ans=0;
    for(int i=0;i<v.size();i++){
      ans=max(ans,calc(y,v[i].first)+calc(y,v[i].second));
    }

    cout << ans << endl;
  }

  return 0;
}