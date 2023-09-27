#include <iostream>
using namespace std;

int main(){
  int n;
  int num[100];
  cin >> n;
  for(int i=0;i<n;++i){
      cin >> num[i];
      cout << (i==0?"":" ") << num[i];
  }
  cout << endl;
  
  for(int i=1;i<n;++i){
      int key = num[i]; //現在の値
      int j = i - 1;    //iより左の値を全て確認
      while(j>=0 && num[j] > key){
          num[j+1] = num[j];
          --j;
      }
      num[j+1] = key;
      for(int j=0;j<n;++j) cout << (j==0?"":" ") << num[j];
      cout << endl;
    }


  return 0;
}

