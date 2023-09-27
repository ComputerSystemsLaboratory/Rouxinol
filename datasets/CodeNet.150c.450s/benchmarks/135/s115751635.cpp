#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef vector<int> vi;
int main()
{
  int n,m;
  while(1) 
  {
    cin >> n >> m;
    if(n==0) break;
    vi h(n+1);
    vi w(m+1);
    int totalh=0,totalw=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
      cin >> h[i];
      totalh+=h[i];
    }
    for(int i=0;i<m;i++)
    {
      cin >> w[i];
      totalw+=w[i];
    }
    vi htype(totalh+1);
    vi wtype(totalw+1);
    for(int i=0;i<n;i++)
    {
      int height=h[i];
      htype[height]++;
      for(int j=i+1;j<n;j++)
      {
				height+=h[j];
				htype[height]++;
      }
    }
    for(int i=0;i<m;i++)
    {
      int width=w[i];
      wtype[width]++;
      for(int j=i+1;j<m;j++)
      {
				width+=w[j];
				wtype[width]++;
      }
    }
    for(int i=1;i<=min(totalh,totalw);i++)
    {
      count+=htype[i]*wtype[i];
    }
    cout << count << endl;
  }
  return 0;
}

