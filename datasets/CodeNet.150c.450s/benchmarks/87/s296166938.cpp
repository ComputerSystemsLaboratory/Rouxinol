#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int sum,a,b,c,d,e,h,k;
  vector<int> ve[6];
  while(1){
    cin>>h;
    if(h==0)break;
    ve[1].clear();
    ve[2].clear();
    ve[3].clear();
    ve[4].clear();
    ve[5].clear();
    for(int i=1;i<=h;i++){
      cin>>a>>b>>c>>d>>e;
      ve[1].push_back(a);
      ve[2].push_back(b);
      ve[3].push_back(c);
      ve[4].push_back(d);
      ve[5].push_back(e);
    }
    reverse(ve[1].begin(),ve[1].end());
    reverse(ve[2].begin(),ve[2].end());
    reverse(ve[3].begin(),ve[3].end());
    reverse(ve[4].begin(),ve[4].end());
    reverse(ve[5].begin(),ve[5].end());
    for(int i=0;i<h;i++){
      ve[1].push_back(-1);
      ve[2].push_back(-1);
      ve[3].push_back(-1);
      ve[4].push_back(-1);
      ve[5].push_back(-1);
    }
    //for(int i=0;i<h;i++)cout<<ve[1][i];
    sum=0;
    while(1){
      k=0;
      for(int i=h-1;i>=0;i--){
	if(ve[1][i]==ve[2][i]&&ve[1][i]==ve[3][i]&&ve[1][i]==ve[4][i]&&ve[1][i]==ve[5][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*5;
	  ve[1].erase(ve[1].begin()+i);
	  ve[2].erase(ve[2].begin()+i);
	  ve[3].erase(ve[3].begin()+i);
	  ve[4].erase(ve[4].begin()+i);
	  ve[5].erase(ve[5].begin()+i);
	  k++;
	}else if(ve[1][i]==ve[2][i]&&ve[1][i]==ve[3][i]&&ve[1][i]==ve[4][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*4;
	  ve[1].erase(ve[1].begin()+i);
	  ve[2].erase(ve[2].begin()+i);
	  ve[3].erase(ve[3].begin()+i);
	  ve[4].erase(ve[4].begin()+i);
	  k++;
	}else if(ve[2][i]==ve[3][i]&&ve[2][i]==ve[4][i]&&ve[2][i]==ve[5][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*4;
	  ve[2].erase(ve[2].begin()+i);
	  ve[3].erase(ve[3].begin()+i);
	  ve[4].erase(ve[4].begin()+i);
	  ve[5].erase(ve[5].begin()+i);
	  k++;
	}else if(ve[1][i]==ve[2][i]&&ve[1][i]==ve[3][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*3;
	  ve[1].erase(ve[1].begin()+i);
	  ve[2].erase(ve[2].begin()+i);
	  ve[3].erase(ve[3].begin()+i);
	  k++;
	}else if(ve[2][i]==ve[3][i]&&ve[2][i]==ve[4][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*3;
	  ve[2].erase(ve[2].begin()+i);
	  ve[3].erase(ve[3].begin()+i);
	  ve[4].erase(ve[4].begin()+i);
	  k++;
	}else if(ve[3][i]==ve[4][i]&&ve[3][i]==ve[5][i]&&ve[3][i]!=-1){
	  sum+=ve[3][i]*3;
	  ve[3].erase(ve[3].begin()+i);
	  ve[4].erase(ve[4].begin()+i);
	  ve[5].erase(ve[5].begin()+i);
	  k++;
	}
      }
      if(k==0)break;
    }
    cout<<sum<<endl;
  }
  return 0;
}