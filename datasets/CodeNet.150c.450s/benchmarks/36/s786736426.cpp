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
 
 using namespace std;
 
 int main()
 {
   int d;
   while(cin>>d)
   {
     int s=0;
     int yield=600/d;
     for(int i=0;i<yield-1;i++) s+=(i+1)*(d)*(i+1)*(d)*d;
     cout<<s<<endl;               
   }
   //while(1);      
   return 0;    
 }
 