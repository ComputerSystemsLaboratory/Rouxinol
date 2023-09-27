#include <iostream>    
#include<cstring>
#include<cstdio>
using namespace std;    
#define min(A,B) ((A)<(B)?(A):(B))    
int dp[2000][2000];    
int EditDistance(char *s,char *t)    
{    
   int i,j,cost;    
   int slength=strlen(s);    
   int tlength=strlen(t);    
   dp[0][0]=0;    
   for(i=1;i<=slength;i++)    
   dp[i][0]=i;    
   for(j=1;j<=tlength;j++)    
   dp[0][j]=j;    
   for(i=1;i<=slength;i++)    
   {    
       for(j=1;j<=tlength;j++)    
       {    
           if(s[i-1]==t[j-1])    
           cost=0;    
           else    
           cost=1;    
           dp[i][j] = min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+cost);    
       }    
   }    
      return dp[slength][tlength];    
}    
int main()    
{    
    char s[1025],t[1025];    
     while(cin>>s>>t)    
     {    
         int minx;    
         minx=EditDistance(s,t);    
         cout<<minx<<endl;    
     }    
 return 0;    
}  
