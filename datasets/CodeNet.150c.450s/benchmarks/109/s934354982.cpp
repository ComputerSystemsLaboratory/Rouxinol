#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <stack>
#include <map>
#include <cstdio>
using namespace std;
int N;
int t[86400];
int main() {
   while(cin >> N, N){
       int t[86400+1]={0};
       for(int i=0; i<N; ++i){
           int h, m, s;
           int start, end;
            scanf("%d:%d:%d", &h, &m, &s);
            start = h*3600+m*60+s;
            scanf("%d:%d:%d", &h, &m, &s);
            end = h*3600 + m*60 + s;
            for(int i=start; i<end; ++i) t[i]++;
           
       }
       int ans = 0;
       for(int i=0; i<86400+1; ++i) ans = max(ans, t[i]);
       cout << ans << endl;
   }
   return 0;
}
