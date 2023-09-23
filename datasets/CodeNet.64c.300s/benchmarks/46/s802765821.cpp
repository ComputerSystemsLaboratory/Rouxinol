#include <iostream>
using namespace std;
#define MAX 1000000
int sosu[MAX];

int main()
{
  sosu[0] = 0;
    sosu[1] = 0;
    for(int i = 2 ; i < MAX ; i++) sosu[i] = 1;
    for(int i = 2 ; i*i < MAX ; i++){
      if(sosu[i] == 1){
	for(int j = i*2 ; j <= MAX ; j+=i){
	  sosu[j] = 0;
	}
      }
    }
    
  while(true){
    int a, d, n;
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;
    int cnt = 0;
    for(int i = a ; ; i += d){
      if(sosu[i] == 1) cnt++;
      if(cnt == n){	
	break;
      }
      a += d;
    }
    cout << a << endl;
  }
}