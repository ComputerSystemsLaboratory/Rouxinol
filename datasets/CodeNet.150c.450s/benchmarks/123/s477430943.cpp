#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
 
int main() {
vector<int> in_list;
vector<bool> isprime;
int m = 0, N, tmp, Nsqrt, cnt;
 
scanf("%d", &N);
for(int i=0; i<N; ++i) {
scanf("%d", &tmp);
if(m < tmp) m = tmp;
in_list.push_back(tmp);
}
 
isprime.resize(m, true);
isprime[0] = false;
Nsqrt = sqrt(m)+1;
 
for(int i=2; i<=Nsqrt; ++i) {
if(isprime[i-1] == false) continue;
for(int j=2*i; j<=m; j+=i) {
isprime[j-1] = false;
}
}
 
cnt = 0;
 
for(vector<int>::iterator itr=in_list.begin(); itr!=in_list.end(); ++itr) {
if(isprime[*itr-1]) ++cnt;
}
 
printf("%d\n", cnt);
return 0;
}