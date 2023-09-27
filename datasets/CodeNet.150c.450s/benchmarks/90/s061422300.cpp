#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define LENGTH 100

int main(){
  
  vector<int> Digit(LENGTH, 0);
  
  
  int tmp;
  int cnt=0;
  while(cin >> tmp){
    cnt++;
    Digit[tmp]++;
  }
  int max = 0;
  vector<int> maxDigits;
  for(int i=0;i<cnt;i++){
    if(Digit[i]>max){
      //      vector<int>().swap(maxDigits); //
      maxDigits.clear();
      maxDigits.push_back(i);
      max = Digit[i];
      //      cout << i << ">:" << endl; 
    }else{
      if(Digit[i]==max){
	maxDigits.push_back(i);
	//	cout << i << "==:" << endl;
      }
    }
  }

  sort(maxDigits.begin(), maxDigits.end());

  for(int i=0;i<maxDigits.size();i++){
    cout << maxDigits[i] << endl;
  }
    
  
}