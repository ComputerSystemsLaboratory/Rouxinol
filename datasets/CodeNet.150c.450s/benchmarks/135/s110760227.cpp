#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n,m,sum=0,a,sums=0,sumh;
  vector<int> x,y,sa;
  while(1){
    cin>>n>>m;
    if(n==0)break;
    x.clear();  y.clear();  sa.clear();

    cin>>a;
    x.push_back(a);
    for(int i=1;i<n;i++){
      cin>>a;
      x.push_back(a+x[i-1]);
    }

    cin>>a;
    y.push_back(a);
    for(int j=1;j<m;j++){
      cin>>a;
      y.push_back(a+y[j-1]);
    }
    x.push_back(0);    y.push_back(0);
    for(int i=0;i<x.size();i++){
      for(int j=0;j<y.size();j++){
	sa.push_back(x[i]-y[j]);
      }
    }
    sort(sa.begin(),sa.end());
    //for(int i=0;i<sa.size();i++)cout<<sa[i]<<endl;///////////
    sum=0;
    sums=0;
    for(int i=1;i<sa.size();i++){
      if(sa[i]==sa[i-1])sum++;
      else if(sa[i]!=sa[i-1]&&sum!=0){
	if(sum==1)sums+=sum;
	else {
	  sum++;
	  sums+=sum*(sum-1)/2;
	}
	//cout<<sums<<"kkkkkk"<<endl;//////////
	sum=0;
      }
    }
    cout<<sums<<endl;
  }
  return 0;
}