#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    
int n ;
cin>>n;
vector<int> dp(10050,0);
for(int i=1;i<106;i++)
{
    for(int j=1;j<106;j++)
    {
        for(int k=1;k<106;k++) 
        {
        
            int temp = i*i+j*j+k*k+i*j+j*k+k*i;
        
        if(temp<=10040)
            dp[temp]++;
            
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<dp[i+1]<<endl;
}


}