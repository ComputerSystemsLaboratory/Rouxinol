#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int n,k;
  int sum1=0 , max = 0;
  int now = 0, nextdata, next;
  int* s;
  while(1){
    sum1 = 0;
    max = 0;
    cin >>n >>k;

    if(n == 0) break;

    s = (int*)malloc(sizeof(int) * k);

    int data;
    for(int i = 0; i<k; i++){
      cin >>data;
      s[i] = data;
      sum1 += data;
    }
    max = sum1;
    now = k-1;

    for(int i = 0; i<n-k; i++){
      cin >>data;
      if(now+1 == k) {
	next = 0;
	nextdata = s[0];
      } else{
	next = now + 1;
	nextdata = s[next];
      }

      sum1 = sum1- nextdata + data;
      if( sum1 > max) max = sum1;
      now = next;
      s[now] = data;
      /*for(int j = 0; j < k; j++){
	cout << s[j]<<" ";
      }
      cout << endl;*/
    }

    cout << max << endl;
    }
  return 0;
}
    