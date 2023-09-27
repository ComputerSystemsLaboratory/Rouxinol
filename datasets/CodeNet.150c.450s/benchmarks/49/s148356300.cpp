#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 100;

int max(int n, int a[]){
  int j, k = 0;

  for(j = 0; j < n; j++){
    if(a[j] > k){
      k = a[j];
    }
  }

  return k;
}

int min(int n, int b[]){
  int j, k = 100000000;

  for(j = 0; j < n; j++){
	if (b[j] < k) {
		k = b[j];
	}
  }

  return k;
}



int main(){
  int n, s[MAX_N], max_num, min_num, sum = 0, ave;

  while(scanf("%d", &n), n != 0){
    for(int i = 0;i < n; i++){
      cin >> s[i]; 
    }

    max_num = max(n, s);
    min_num = min(n, s);

    sum = 0;
    for(int l = 0; l < n; l++){
      sum = sum + s[l];
    }

    sum = sum - max_num - min_num;
    ave = sum / (n - 2);

    cout << ave << endl;
  }
    return 0;
}