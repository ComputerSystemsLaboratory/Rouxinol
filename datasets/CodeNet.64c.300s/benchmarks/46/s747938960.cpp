#include <iostream>
using namespace std;

#define N 1000100

int main(void){
  bool eratos[N];
  eratos[0] = eratos[1] = false;
  for(int i = 2; i < N; i++){ eratos[i] = true; }
  for(int i = 2; i * i < N; i++)
    if(eratos[i])
      for(int j = i + i; j < N; j += i)
        eratos[j] = false;
  
  while(true){
    int a, d, n;
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0){ break; }
    
    int ans = 0;
    int count = 0;
    for(int i = a; count < n; i += d){
      if(eratos[i]){
        ++count;
        ans = i;
      }
    }
    
    cout << ans << endl;
  }

  return 0;
}