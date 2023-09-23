#include <iostream>
#include <cstdio>
using namespace std;
int count;
int n,s;

void find_dps(int sum, int now, int add_count) {
  //printf("%d %d : %d %d\n",sum,s,add_count,n);
  if (now > 10 || add_count > n || sum > s) {
    return;
  }
  if (sum == s && add_count == n) {
    //printf("now=%d\n", now);
    count++;
    return;
  }
  find_dps(sum+now, now+1, add_count+1);
  find_dps(sum, now+1, add_count);
}

int main (int argc, char const* argv[]) {
  while (true) {
    cin>>n>>s;
    if (n==0 && s==0) break;
    count = 0;
    find_dps(0,0,0);
    cout<<count<<endl;
  }
  return 0;
}