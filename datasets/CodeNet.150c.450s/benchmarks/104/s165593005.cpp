
//Nayeem Shahriar Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.


#include <bits/stdc++.h>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int main()

{

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int T,n,x,b,w;

  char s;

  cin>>w;

  int a[w];

  for(int i=0;i<w;i++)

  {
      a[i]=i+1;
  }

  cin>>n;

  while(n--)

  {
      cin>>x>>s>>b;

      swap(a[x-1],a[b-1]);

  }

   for(int i=0;i<w;i++)

   {
       cout<<a[i]<<endl;
   }


  return 0;

}