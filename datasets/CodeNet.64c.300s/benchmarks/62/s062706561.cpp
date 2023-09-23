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
 
 using namespace std;
 
 int matrix[105][105];
 int mul[105];
 int sum[105]={0};

 int main()
 {
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<m;j++)
     {
       cin>>matrix[i][j];        
     }        
   }
   for(int i=0;i<m;i++) cin>>mul[i];
   for(int i=0;i<n;i++) 
   {
     for(int j=0;j<m;j++)
     {
       sum[i]+=matrix[i][j]*mul[j];       
     }        
   } 
   for(int i=0;i<n;i++) cout<<sum[i]<<endl;
   //while(1);
   return 0;
 }
 