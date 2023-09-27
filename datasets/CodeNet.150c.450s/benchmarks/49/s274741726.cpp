#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int num;
while(true)
{
int ans = 0;
cin >> num;
if(num != 0)
{
int a[num];
for(int i = 0;i<num;i++)
{
 cin >> a[i];
}
sort(a, a + num);
for(int i=1; i<num-1;i++)
{
ans += a[i];
}
cout << ans / (num - 2) << endl;
}
else
{
return 0;
}
}
}