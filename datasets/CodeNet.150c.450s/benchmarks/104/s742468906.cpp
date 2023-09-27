#include <iostream>
#include <stdlib.h>
using namespace std;

void amida(int w, int n, int a[], int b[]);

int main(void){
  int w, n;
  int a[30], b[30];
  char s[20], tmp[10];

  while(cin >> w){
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> s;
      int j, k;

      for(j = 0; s[j] != ','; j++){
        tmp[j] = s[j];
      }
      tmp[j++] = 0;
      a[i] = atoi(tmp);

      k = 0;
      while(s[j]){
        tmp[k++] = s[j++];
      }
      tmp[k] = 0;
      b[i] = atoi(tmp);
    }

    amida(w, n, a, b);
  }
}

void amida(int w, int n, int a[], int b[]){
  int ans[31];
  int tmp;

  for(int i = 1; i <= w; i++){
    ans[i] = i;
  }

  for(int i = 0; i < n; i++){
    tmp = ans[a[i]];
    ans[a[i]] = ans[b[i]];
    ans[b[i]] = tmp;
  }

  for(int i = 1; i <= w; i++){
    cout << ans[i] << "\n";
  }
}