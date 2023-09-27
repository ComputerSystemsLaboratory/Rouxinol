#include<iostream>
using namespace std;

int main(){
  int n,p;
  int player[50] = {0};
  int step, stone;

  cin >> n >> p;
  while(n!=0 && p != 0){
    for(int i=0; i<n; i++)
      player[i] = 0;
    step = 0;
    stone = p;

    while(1){
      if(stone == 0){
	stone = player[step];
	player[step] = 0;
      }else{
	if(stone == 1 && player[step] == p-1){
	  break;
	}
	stone--;
	player[step]++;
      }

      if(step < n-1)
	step++;
      else
	step=0;
    }

    cout << step << "\n";
    cin >> n >> p;
  } 

  return 0;
}