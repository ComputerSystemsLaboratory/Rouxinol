#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
#define frp(i,n) for((i)=0;(i)<(n);i++)
int vx[4]={0,1,0,-1};
int vy[4]={1,0,-1,0};
int H,W;
int check(int n1,int n2,int rednum,vector<int> red1,vector<int> red2){
  for(int i=0;i<rednum;i++){
    if(n1==red1[i]&&n2==red2[i]||n1<0||n2<0||n1>=H||n2>=W){
      return 0;
    }
  }
  return 1;
}
int main(){
  int i,j,now1,now2;
  while(cin>>W>>H,W+H!=0){
    int num=1;
    string str2;
    vector<string> str;
    vector<int> red1;
    vector<int> red2;
    frp(i,H){
      cin>>str2;
      str.push_back(str2);
    }
    frp(i,H){
      frp(j,W){
	if(str[i][j]=='#'){
	  red1.push_back(i);
	  red2.push_back(j);
	}
      }
    }
    queue<pair<int,int> > qii;
    frp(i,H){
      frp(j,W){
	if(str[i][j]=='@'){
	  qii.push(make_pair(i,j));
	  red1.push_back(i);
	  red2.push_back(j);
	}
      }
    }
    while(!qii.empty()){
      now1=qii.front().first;
      now2=qii.front().second;
      qii.pop();
      for(i=0;i<4;i++){
	if(check(now1+vx[i],now2+vy[i],red1.size(),red1,red2)==1){
	  red1.push_back(now1+vx[i]);
	  red2.push_back(now2+vy[i]);
	  qii.push(make_pair(now1+vx[i],now2+vy[i]));
	  num++;
	}
      }
    }
    cout<<num<<endl;
  }
  return 0;
}
      