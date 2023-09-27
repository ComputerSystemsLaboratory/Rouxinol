#include <iostream>
using namespace std;

int main()
{
 int N;
 while(cin>>N, N) {
   int ans=0;

  for (int i=1; i<N; i++) {
    int sum=0;
    for (int j=i; sum<N; j++) {
      sum += j;
      if (sum==N) ans++;
    }
  }

  cout << ans << endl;
 }
}