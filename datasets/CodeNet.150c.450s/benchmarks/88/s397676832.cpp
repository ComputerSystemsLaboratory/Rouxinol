#include<iostream>
#include<cstring>
#include<algorithm>
#define Dist(x,y) ((x)*(x)+(y)*(y))
using namespace std;

typedef struct{
  int height;
  int weight;
} Rectangle;

bool operator<(Rectangle r1,Rectangle r2){
  int di1=Dist(r1.height,r1.weight);
  int di2=Dist(r2.height,r2.weight);
  if(di1 < di2) return true;
  else if(di1 > di2) return false;
  else return (r1.height < r2.height);
}

int main(){
  int h,w;
  while(cin>>h>>w,w+h){
    Rectangle r;
    r.height=h;
    r.weight=w;
    Rectangle min;
    min.height=150;
    min.weight=150;
    for(int i=1;i<150;i++){
      for(int j=1;j<i;j++){
	Rectangle tmp;
	tmp.height=j;
	tmp.weight=i;
	if(r < tmp && tmp < min) min = tmp;
      }
    }
    cout<<min.height<<" "<<min.weight<<endl;
  }
  return 0;
}