#include<iostream>

using namespace std;

int main(){
  int n, p;

  while(cin >> n >> p){
    if(n == 0 && p == 0) break;
    int max = p;
    int num = 0;
    int data[n];
    for(int i = 0; i < n; i++) data[i] = 0;

    while(1){
      if(p == 0){
	p = data[num];
	data[num] = 0;
      }else{
	data[num]++;
	p--;
	if(data[num] == max){
	  cout << num << endl;
	  break;
	}
      }
      num++;
      if(num == n)num = 0;
    }
  }
  return 0;
}