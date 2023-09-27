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
 
 int main()
 {
   int a,b;
   char op;
   while(cin>>a>>op>>b)
   {
     int result;
     if(op=='?') break;
     else 
     {
       if(op=='+') result=a+b;
       else if(op=='-') result=a-b;
       else if(op=='*') result=a*b;
       else result=a/b;    
     }                 
     cout<<result<<endl;   
   }
   //while(1);
   return 0;
 }
 