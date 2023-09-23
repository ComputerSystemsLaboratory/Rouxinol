 
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
 
 int a[10]={0,1,2,3,4,5,6,7,8,9};
 int n,s;
 int count_2;
 
 void dfs(int step,int i,int sum)
 {
   if(sum>s||step>n) return;
   if(i==10)
   {
     if(step==n&&i==10&&sum==s)
     {
       count_2++;
       return;                          
     }
     else return; 
   }    
   dfs(step,i+1,sum); 
   dfs(step+1,i+1,sum+a[i]);
   return;
 }
  
 int main()
 {
   while(cin>>n>>s)
   {
     if(n==0&&s==0) break;
     else
     {
       count_2=0;
       dfs(0,0,0);    
     } 
     cout<<count_2<<endl;               
   }
   //while(1);     
   return 0;  
 }
 