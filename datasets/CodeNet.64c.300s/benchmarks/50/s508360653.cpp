#include<iostream>
using namespace std;

#define MAX 100

int main(void) {
  int n;
  int input[MAX];

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> input[i];
  }

  int count = 0;
  int flag = 1;
  while(flag) {
    flag = 0;
    for(int j = n - 1; j >= 1; j--) {
      if(input[j - 1] > input[j]) {
        int tmp = input[j];
        input[j] = input[j - 1];
        input[j - 1] = tmp;
        flag = 1;
        count++;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    if(i == 0) {
      cout << input[i];
    }
    else {
      cout << " " << input[i];
    }
  }
  cout << endl;
  cout << count << endl;

  return 0;
}