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
 
 using namespace std;
 
 int kk[10*10];
 
 int main()
 {
   int n;
   while(cin>>n)
   {
     int a,b,c,d;
     int count=0;
     for(a=0;a<10;a++)
     {
       for(b=0;b<10;b++)
       {
         for(c=0;c<10;c++)
         {
           for(d=0;d<10;d++)
           {
             if(a+b+c+d==n) count++;                 
           }                 
         }                 
       }                 
     }           
     cout<<count<<endl;  
   }
   //while(1);      
   return 0;    
 }