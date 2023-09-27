#include <bits/stdc++.h>

using namespace std;

int H, pzl[10][5];

int delStone()
{
  int ret = 0;
  
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5 - 2; j++){
      int *a = &pzl[i][j], *b = &pzl[i][j+1], *c = &pzl[i][j+2];
      if(abs(*a) == abs(*b) && abs(*a) == abs(*c)){
	*a = *b = *c = -abs(*a);
      }
    }
  }/*
    cout << "-------------------" << endl;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++) cout << pzl[i][j] << " ";
    cout << endl;
  }
   */
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++){
      if(pzl[i][j] < 0){
	ret -= pzl[i][j];
	pzl[i][j] = 0;
      }
    }
  }/*
  cout << "-------------------" << endl;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++) cout << pzl[i][j] << " ";
    cout << endl;
  }
   */
  for(int i = H-1; i > 0; i--){
    for(int j = 0; j < 5; j++){
      if(pzl[i][j] == 0){
	for(int k = i-1; k >= 0 && pzl[i][j] == 0; k--){
	  swap(pzl[i][j], pzl[k][j]);
	}
      }
    }
  }/*
  cout << "-------------------" << endl;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++) cout << pzl[i][j] << " ";
    cout << endl;
  }
   */
  return ret;
}

int getScore()
{
  int ret = 0, rec = 0;
  while((rec = delStone()) > 0){
    ret += rec;
  }
  return ret;
}

int main()
{
  while(cin >> H, H){
    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++) cin >> pzl[i][j];
    }
    cout << getScore() << endl;
  }
  return 0;
}