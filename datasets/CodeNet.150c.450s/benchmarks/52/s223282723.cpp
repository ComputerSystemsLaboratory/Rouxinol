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
   int N;
   stack<int> mystack;
   while(cin>>N)
   {
     if(N!=0) mystack.push(N);
     else
     {
       int m=mystack.top();
       mystack.pop();
       cout<<m<<endl;    
     }               
   }
   //while(1);      
   return 0;    
 }