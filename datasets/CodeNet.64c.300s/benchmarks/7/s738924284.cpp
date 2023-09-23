#include <iostream>
using namespace std;

int main(){
  int n;
  char a[4] = {'S', 'H', 'C', 'D'};
  char suits[52];
  int ranks[52];

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> suits[i];
    cin >> ranks[i];
  }
  for(int j=0; j<4; j++){
    for(int k=1; k<=13; k++){
      for(int i=0; i<n; i++){
        if(ranks[i]==k&suits[i]==a[j]){
          break;
        } else if(i==n-1) {
          cout << a[j] << " " << k << endl;
        }
      }
    }
  }
}

