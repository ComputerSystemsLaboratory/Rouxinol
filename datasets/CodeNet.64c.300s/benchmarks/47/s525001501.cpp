#include <iostream>

using namespace std;

int main(){
  int cnt[101]={0};
  int num,max = 0;
  while(cin >> num){
	cnt[num]++;
	if(cnt[num] > max) max = cnt[num];
  }
  for(int i=1;i<101;i++){
	if(cnt[i] == max)
	  cout << i << endl;
  }
  return 0;
}