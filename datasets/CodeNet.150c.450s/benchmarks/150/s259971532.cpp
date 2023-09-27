#include<iostream>
using namespace std;
static const int MAX = 10000;
int Count[MAX + 1];

int main(){
  int n, m;
  cin >> n;
  for(int i = 0; i <= MAX; i++)
    Count[i] = 0;
  for(int i = 0; i < n; i++){
    cin >> m;
    Count[m]++;
  }

  for(int i = 0, c = 0; c < n; i++){
    if(Count[i] > 0){
      while(Count[i]--){
        if(c)
          cout << " ";
        cout << i;
        c++;
      }
    }
  }
  cout << endl;
  return 0;
}