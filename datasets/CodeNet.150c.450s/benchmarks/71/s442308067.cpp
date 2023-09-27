#include<iostream>
#include<string>
using namespace std;

int main(){

  int num;
  while(cin >> num){
    int combi = 0;
    for(int i = 0; i  <=9; i++){
      for(int j = 0; j <= 9; j++){
	for(int k = 0; k <= 9; k++){
	  for(int l = 0; l <= 9; l++){
	    if(i+j+k+l == num){
	      combi++;
	    }
	  }
	}
      }
    }
    cout << combi << endl;
  }


 return 0;

}