#include <iostream>
using namespace std;

int main(void)
{
 int n;
 long long int sum=1;
 while(cin>>n)
 {
  for(int i=1; i<=n; i++)
 {
 sum*=i;
 }
cout<<sum<<endl;
}
return 0;
}