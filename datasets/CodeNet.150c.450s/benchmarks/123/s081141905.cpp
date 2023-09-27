#include<iostream>
using namespace std;

int main(){
	int num;
  cin >> num;
  int input=0;
  int solve=0;
	for(int i=0;i<num;i++){
    cin >> input;
    if(input!=1){
      for(int j=2;j*j<=input;j++){
        if(input%j==0){
          solve--;
          break;
        }
      }
      solve++;
    }
  }
	cout << solve << endl;
	return 0;
}