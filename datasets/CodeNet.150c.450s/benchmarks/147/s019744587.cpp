#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mp make_pair
#define pb push_back
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)  ((a)*((b)/gcd(a,b)))
#define pi 3.14159265358979323846
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;

//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
    
    int n;
    cin>>n;
    int b[10050]={0},i,j,k,v;
    for(i=1;i<=102;i++)
    {
    	for(j=1;j<=102;j++)
    	{
    		for(k=1;k<=102;k++)
    		{
    			v=i*i+j*j+k*k+i*j+j*k+k*i;
    			if(v<10050)
    			{
    				b[v]+=1;
				}
			}
		}
    }
    for(i=0;i<n;i++)
    {
    	cout<<b[i+1]<<endl;
	}
	
	
	return 0;
}