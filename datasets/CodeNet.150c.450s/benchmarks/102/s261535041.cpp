#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> x;
vector<int> y;
vector<int> nextx;
vector<int> nexty;
int w,h;
int count;
bool check(int a,int b){
  for (int i=0;i<nextx.size();i++){
    if (nextx[i]==a&&nexty[i]==b)
      return false;
  }
  return true;
}
int search(int **field){
  x.clear();
  y.clear();
  for (int i=0;i<nextx.size();i++){
    x.push_back(nextx[i]);
    y.push_back(nexty[i]);
  }
  nextx.clear();
  nexty.clear();
  for (int i=0;i<x.size();i++){
    field[x[i]][y[i]]=0;
    count++;
  }
  for (int i=0;i<x.size();i++){
    if (field[x[i]-1][y[i]]==1&&x[i]-1>=0&&check(x[i]-1,y[i])){
      nextx.push_back(x[i]-1);
      nexty.push_back(y[i]);
    }
    if (x[i]+1<h&&field[x[i]+1][y[i]]==1&&check(x[i]+1,y[i])){
      nextx.push_back(x[i]+1);
      nexty.push_back(y[i]);
    }
    if (field[x[i]][y[i]-1]==1&&y[i]-1>=0&&check(x[i],y[i]-1)){
      nextx.push_back(x[i]);
      nexty.push_back(y[i]-1);
    }
    if (field[x[i]][y[i]+1]==1&&y[i]+1<w&&check(x[i],y[i]+1)){
      nextx.push_back(x[i]);
      nexty.push_back(y[i]+1);
    }
  }
  if (nextx.empty()){
    return -1;
  }
  int *f[h];
  for (int i=0;i<h;i++)
    f[i]=field[i];
  return search(f);
}
int main(){
  string temp;
  while (cin>>w>>h,w|h!=0){
    count=0;
    int field[h][w];
    for (int i=0;i<h;i++){
      cin>>temp;
      for (int j=0;j<w;j++){
	if (temp[j]=='.')
	  field[i][j]=1;
	if (temp[j]=='#')
	  field[i][j]=0;
	if (temp[j]=='@'){
	  field[i][j]=1;
	  nextx.push_back(i);
	  nexty.push_back(j);
	}
      }
    }
    int *f[h];
    for (int i=0;i<h;i++)
      f[i]=field[i];
    search(f);
    cout<<count<<endl;
  }
}