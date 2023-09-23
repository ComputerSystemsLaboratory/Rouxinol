#include <iostream>
using namespace std;

int n;
int r[200005];

int main()
{
cin >>n;
for(int i=0;i<n;i++) cin >> r[i];

int ans = -1000000000;
int min = r[0];

for(int i=1;i<n;i++) {
if(r[i] - min > ans) ans = r[i]-min;
if(r[i] < min) min = r[i];
}

cout << ans << endl;

return 0;
}