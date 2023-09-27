#include<iostream>

int main(){
  int n, x, counter;
  while(1){
    counter = 0;
    std::cin >> n >> x;
    if(n == 0 && x == 0) break;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++){
	for(int k = 1; k<= n; k++){
	  if(i + j + k == x){
	    if(i != j && i != k && j != k){
	      if(i < j && j < k){
		counter++;
	      }
	    }
	  }
	}
      }
    }
    std::cout << counter << std::endl;
  }
  return 0;
}