#include <iostream>
using namespace std;

int main()
{
 bool prime[1000000];
 for(int i=0; i<1000000; i++) prime[i] = true;

 prime[0] = prime[1] = false;
 for(int i=0; i<1000000; i++)
  if(prime[i]){
   for(int j=i+i; j<1000000; j += i)
    prime[j] = false;
  }

 int n;
 while(cin >> n){
  int c = 0;
  for(int i=0; i<=n; i++)
   if(prime[i]) c++;
  
  cout << c << '\n';
 }

 return 0;
}