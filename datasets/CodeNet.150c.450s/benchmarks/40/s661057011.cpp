#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int dice[6],i,dif[6],len;
  string str;
  /********サイコロの目の入力*********/
  for(i = 0 ; i < 6 ; i++)
    {
      cin >> dice[i];
    }
  cin >> str;
  len = str.size();
  for ( int j = 0 ; j < len ; j++){
    if(str[j] == 'S')
      {
	dif[0] = dice[4];
	dif[1] = dice[0];
	dif[2] = dice[2];
	dif[3] = dice[3];
	dif[4] = dice[5];
	dif[5] = dice[1];
      }
    else if (str[j] == 'W')
      {
	dif[0] = dice[2];
	dif[1] = dice[1];
	dif[2] = dice[5];
	dif[3] = dice[0];
	dif[4] = dice[4];
	dif[5] = dice[3];
      }
    else if(str[j] == 'E')
      {
	dif[0] = dice[3];
	dif[1] = dice[1];
	dif[2] = dice[0];
	dif[3] = dice[5];
	dif[4] = dice[4];
	dif[5] = dice[2];
      }
    else if (str[j] == 'N')
      {
	dif[0] = dice[1];
	dif[1] = dice[5];
	dif[2] = dice[2];
	dif[3] = dice[3];
	dif[4] = dice[0];
	dif[5] = dice[4];
      }
    
    for( i = 0 ; i < 6 ; i++)
      {
	dice[i] = dif[i];
      }
  }
  cout << dice[0] << endl;
  return 0;
}