#include<iostream>
#include<cmath>
#include<vector>
#define N 999999

using namespace std;

vector<int> MakePrimeNumber(void);

int main(){
  int i, j, a, d, n, count;
  vector<int> data;

  data = MakePrimeNumber();

  while(1){
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;

    i = a;
    j = 0;
    count = 0;
    while(1){
      if(i == data[j]){
	++count;
	if(count == n) break;
	i += d;
	++j;
      }else if(i < data[j]){
	i += d;
      }else{
	++j;
      }
    }

    cout << i << endl;
  }
  return 0;
}

vector<int> MakePrimeNumber(void){
  int i, j, k;
  vector<int> data;

  data.push_back(2);
  data.push_back(3);
  for(i=5; i<=N; i+=2){
    for(j=1, k=0; data[j]<=sqrt(i); ++j){
      if(i%data[j] == 0){
        k = 1;
        break;
      }
    }
    if(k == 0) data.push_back(i);
  }
  return data;
}