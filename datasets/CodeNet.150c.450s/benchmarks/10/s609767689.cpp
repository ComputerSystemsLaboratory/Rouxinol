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
 
 int build[12][10]={{0}};
 
 int main()
 {
   int N;
   cin>>N;
   while(N--)
   {
     int b,f,r,v;
     cin>>b>>f>>r>>v;
     int i=(b-1)*3+(f-1);
     int j=r-1;
     build[i][j]+=v;          
   }
   for(int i=0;i<12;i++)
   {
     for(int j=0;j<10;j++)
     {
       cout<<" "<<build[i][j];          
     } 
     cout<<endl;
     if((i!=0)&&(i%3==2)) 
     {
       if(i==11) break;
       for(int k=0;k<20;k++) cout<<"#";
       cout<<endl;                     
     }       
   }
   //while(1);
   return 0;
 }
 
 
 