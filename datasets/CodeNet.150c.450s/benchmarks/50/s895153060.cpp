#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void kesan(int, int*, int*);
int main(){
  int n, i , j, a;
  while(true){
    cin >> n;
    a = 0;
    if(!n)
      break;
    n = 1000 - n;
    kesan(500, &a, &n);
    kesan(100, &a, &n);
    kesan(50, &a, &n);
    kesan(10, &a, &n);
    kesan(5, &a, &n);
    a += n;

    printf("%d\n", a);
  }
	return 0;
}

void kesan(int coin, int *a, int *n){
  int i = *n / coin;
  *a += i;  
  *n -= i * coin;
}