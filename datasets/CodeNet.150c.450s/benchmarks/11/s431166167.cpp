#include <iostream>

using namespace std;

int main(void)
{
  int n; //??????????????°
  int num; 
  char mark;
  char marks[4] = {'S', 'H', 'C', 'D'};
  int cards[4][13] = {0};

  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> mark >> num;
    for(int j = 0; j < 4; j++){
      if(mark == marks[j]){
	cards[j][num-1] = 1;
	break;
      }
    }
  }
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      if(!cards[i][j] == 1){
	cout << marks[i] << " " << j+1 << "\n";
      }
    }
  }
  return 0;
}

      