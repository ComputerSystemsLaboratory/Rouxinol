#include <iostream>
using namespace std;

int main(){

  while(1){
    int n;
    int p[200];
    cin >> n;

    if(n == 0) break;
    int max = -1,min = 2000;
    for(int i = 0;i< n;i++){
      cin >> p[i];
      if(max < p[i])max = p[i];
      if(min > p[i])min = p[i];
    }

    int sum = 0,count=0;
    for(int i = 0;i< n;i++){
      if(max == p[i]){
	max = -1;
	continue;
      }
      if(min == p[i]){
	min = 2000;
	continue;
      }
      sum += p[i];
      count++;
    }

 
    cout << sum / count << endl;;

  }
  return 0;
}