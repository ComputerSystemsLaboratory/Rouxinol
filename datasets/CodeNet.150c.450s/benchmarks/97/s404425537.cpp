#include <bits/stdc++.h>

using namespace std;

class Num{
public:
  int x=0;
  int y=0;
};

int main(){

  int N;
  int n,d;
  vector<Num> num;
  int left=0,down=0,right=0,up=0;

  while(true){
    cin >> N;
    if(N==0) break;

    num.resize(N);

    for(int i=1; i<N; ++i){
      cin >> n >> d;

      num[i].x+=num[n].x;
      num[i].y+=num[n].y;

      if(d==0){
	--num[i].x;
      }
      else if(d==1){
	++num[i].y;
      }else if(d==2){
	++num[i].x;
      }else if(d==3){
	--num[i].y;
      }

      left=min(left,num[i].x);
      right=max(right,num[i].x);
      up=min(up,num[i].y);
      down=max(down,num[i].y);
    }

    cout << right - left +1 << " " << down - up +1 << endl;


    left=0,down=0,right=0,up=0;
    num.clear();
  }


  
  return 0;
}

