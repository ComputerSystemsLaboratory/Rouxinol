#include<iostream>

using namespace std;

int main(){

  int in, k;

  while(cin >> in >> k){
    if(in == 0 && k == 0) break;
    int data[in];
    int sum;

    for(int i = 0; i < in; i++){
      cin >> data[i];
    }

    int tmp = 0;

    for(int i = 0; i < k; i++){
      tmp += data[i];
    }
    sum = tmp;
    int num = 0;

    for(int i = k; i < in; i++){
      tmp -= data[num];
      num++;
      tmp += data[i];
      if(i == 0 || sum < tmp) sum = tmp;
    }

    cout << sum << endl;
  }
  return 0;
}