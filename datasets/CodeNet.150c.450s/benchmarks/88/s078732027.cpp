#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class disless{
public:
  bool operator()(const pair<int,pair<int,int> >& disleft,const pair<int,pair<int,int> >& disright) const{
    if(disleft.first == disright.first) return disleft.second.first < disright.second.first;
    return disleft.first < disright.first;
  }
};

int main(){
  vector <pair<int,pair<int,int> > > data;
  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++) data.push_back(make_pair(i*i+j*j,make_pair(i,j)));
  }
  sort(data.begin(),data.end(),disless());
  int h,w,dis;
  while(cin >> h >> w,w||h){
    dis = h*h+w*w;
    for(int i=0;i<data.size();i++){
      if(data[i].second.first == h && data[i].second.second == w){
	cout << data[i+1].second.first << " " << data[i+1].second.second << endl;
	break;
      }
    }
  }
}