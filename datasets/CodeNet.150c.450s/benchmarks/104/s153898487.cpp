#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
  int width,number;
  cin >> width >> number;
  int change[number][2];
  string str;
  for(int i=0; i<number; i++){
    scanf("%d,%d",&change[i][0],&change[i][1]);
  }
  int bou[width+1];
  for(int i=0; i<width+1; i++){
    bou[i] = i;
  }
  int temp;
  for(int i=0; i<number; i++){
    temp = bou[change[i][0]];
    bou[change[i][0]] = bou[change[i][1]];
    bou[change[i][1]] = temp;
  }

  for(int i=1; i<width+1; i++){
    cout << bou[i] << endl;
  }
  return 0;
}