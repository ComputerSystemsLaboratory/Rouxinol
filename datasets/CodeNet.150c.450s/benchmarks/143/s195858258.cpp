#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define float long double 

int32_t main()
{
  IOS;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  int freq[100006]={0};
  int s= 0 ;
  for(int i=0;i<n; i++)
  {
    freq[arr[i]]++;
    s+=arr[i];
  }

  int q;
  cin>>q;
  while(q--)
  {
    int a,b;
    cin>>a>>b;

    int no = freq[a];
    freq[a] = 0;
    s-=(a*no);
    s+=(no*b);
    freq[b]+=no;
    cout<<s<<endl;
  }
  return 0;
}