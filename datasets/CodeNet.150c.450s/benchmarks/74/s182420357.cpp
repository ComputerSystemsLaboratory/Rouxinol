 #include<iostream>
 #include<stdio.h>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 #include<stack>
 #include<queue>
 #include<deque>
 #include<functional>
 #include<utility>
 
 using namespace std;

 int main()
 {
   int n,m;
   int arr[20+2];
   int dp[50000+1];
   dp[0]=0;
   cin>>n>>m;
   //int start;
   for(int i=0;i<m;i++) cin>>arr[i];
   sort(arr,arr+m);
   for(int i=1;i<=n;i++)
   {
     dp[i]=dp[i-arr[0]]+1;
     for(int j=1;j<m;j++)
     {
       if(i<arr[j]) break;
       dp[i]=min(dp[i],dp[i-arr[j]]+1);        
     }        
   }
   cout<<dp[n]<<endl;
   //while(1);
   return 0;
 }

 