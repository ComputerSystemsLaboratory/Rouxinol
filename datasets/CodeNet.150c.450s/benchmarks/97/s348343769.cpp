#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int main(){
  int n;
  while(cin >>n,n){
      int a,b;
      int wide[2] = {0,0}, high[2] = {0,0};
      map<int, pair<int ,int> > field;
      field[0].first = 0;
      field[0].second = 0;
      for(int i = 1; i<n; i++){
	scanf("%d %d",&a,&b);
	int x = field[a].first;
	int y = field[a].second;
	if(b == 0){x--;}
	if(b == 1){y++;}
	if(b == 2){x++;}
	if(b == 3){y--;}
	if(x < wide[0]){wide[0] = x;}
	if(x > wide[1]){wide[1] = x;}
	if(y < high[0]){high[0] = y;}
	if(y > high[1]){high[1] = y;}
	field[i] = make_pair(x,y);
      }
      cout <<wide[1]-wide[0]+1<<" "<<high[1]-high[0]+1<<endl;
  }
  return 0;
}