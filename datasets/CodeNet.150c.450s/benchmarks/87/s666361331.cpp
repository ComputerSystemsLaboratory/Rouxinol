#include<iostream>
#include<vector>
#define mp make_pair
using namespace std;
typedef pair<int,int> pii;

const int w=5;
int puzzle[w][10];

int del(vector<pii> stone){
  int res=0;
  for(int i=0;i<stone.size();i++){
    int x,y;
    x=stone[i].first;
    y=stone[i].second;
    res+=puzzle[x][y];
    puzzle[x][y]=0;
  }
  return res;
}

vector<pii> check(int h){
  vector<pii> stone;
  for(int i=0;i<h;i++){
    int cnt=0;
    for(int j=0;j<w;j++){
      while(j<w && puzzle[j][i] == puzzle[j+1][i] && puzzle[j][i]!=0){
	cnt++;j++;
      }
      if(cnt>=2){
	for(int k=j-cnt;k<=j;k++){
	  stone.push_back(mp(k,i));
	}
      }
      cnt=0;
    }
  }
  return stone;
}

bool drop(int h){
  bool res=false;
  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      for(int k=h-1;k>j;k--){
	if(puzzle[i][k]==0){
	  res=true;
	  int tmp=puzzle[i][k];
	  puzzle[i][k]=puzzle[i][k-1];
	  puzzle[i][k-1]=tmp;
	}
      }
    }
  }
  return res;
}

void printPuzzle(int h){
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cout << puzzle[j][i] << " ";
    }
    cout << endl;
  }
}

int main(){
  int h;
  while(cin>>h,h){
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	cin>>puzzle[j][i];
    int ans=0;
    vector<pii>stone=check(h);
    while(!stone.empty()){
      ans+=del(stone);
      //out << "del end" << endl;
      drop(h);
      //cout << "drop end" << endl;
      //printPuzzle(h);
      stone=check(h);
    }
    cout << ans << endl;
  }
  return 0;
}