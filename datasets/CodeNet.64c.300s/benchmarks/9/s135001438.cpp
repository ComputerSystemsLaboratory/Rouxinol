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

 int main()
 {
   int n;
   int total=100000;
   cin>>n;
   while(n--)
   {
     total=(int)(total*1.05);
     if(total%1000==0) continue;
     else total=(total/1000+1)*1000;          
   }
   cout<<total<<endl;
   //while(1);      
   return 0;    
 }
 
 