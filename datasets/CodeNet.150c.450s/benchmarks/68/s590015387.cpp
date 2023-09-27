#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n,between,temp;
  while (1) {
    scanf("%d",&n);
    if(n==0){
      return 0;
    }
    std::vector<int> a(n);
    for (size_t i = 0; i < n; i++) {
      scanf("%d",&a[i]);
    }
    sort(all(a));
  between=a[1]-a[0];
    for (size_t i = 1; i < n-1; i++) {
      temp=a[i+1]-a[i];
      if(between>temp){
        between=temp;
      }
    }
    printf("%d\n",between);
  }

  return 0;
}