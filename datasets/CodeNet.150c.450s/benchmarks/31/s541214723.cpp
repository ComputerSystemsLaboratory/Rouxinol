#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 2000000;
 
 
int main(void)
{
   int n,rt[MAX];
 
   cin >> n;
   for(int i=0;i<n;i++) cin >> rt[i];
 
   int maxv = -2000000000;
   int minv = rt[0];
 
   for(int i=1;i<n;i++){
     maxv = max(maxv,rt[i] - minv);
     minv = min(minv,rt[i]);
   }
cout << maxv << endl;
return 0;
}