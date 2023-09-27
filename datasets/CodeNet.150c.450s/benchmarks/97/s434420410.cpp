#include <iostream>
#include <vector>
using namespace std;

struct pos{
  int x;
  int y;
};

int main(){
  int n, n1, d1;
  int left, right, up, down;
  pos setpos;
  vector<pos> position;
  vector<pos>::iterator posit;

  while(1){
    cin >> n;
    if(n == 0) break;
    
    //初期化
    left = 0;
    right = 0;
    up = 0;
    down = 0;
    setpos.x = 0;
    setpos.y = 0;
    position.clear();
    position.push_back(setpos);

    //入力
    for(int i = 1; i < n; i++){
      cin >> n1 >> d1;
      posit = position.begin() + n1;
      if(d1 == 0){
	setpos.x = (*posit).x -1;
	setpos.y = (*posit).y;
	if(setpos.x < left) left = setpos.x;
	position.push_back(setpos);
      }else if(d1 == 1){
	setpos.x = (*posit).x;
	setpos.y = (*posit).y -1;
	if(setpos.y < down) down = setpos.y;
	position.push_back(setpos);
      }else if(d1 == 2){
	setpos.x = (*posit).x +1;
	setpos.y = (*posit).y;
	if(right < setpos.x) right = setpos.x;
	position.push_back(setpos);
      }else{
	setpos.x = (*posit).x;
	setpos.y = (*posit).y +1;
	if(up < setpos.y) up = setpos.y;
	position.push_back(setpos);
      }
    }

    //表示
    int maxwidth, maxheight;
    left *= -1;
    down *= -1;
    maxwidth = left + right + 1;
    maxheight = up + down + 1;
    cout << maxwidth << " " <<  maxheight << endl;

  }

  return 0;
}