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
 #include<functional>
 #include<utility>
 
 using namespace std;
 
 int main()
 {
   int N;
   int tai,hua;
   tai=hua=0;
   cin>>N;
   while(N--)
   {
     string a,b;
     cin>>a>>b;
     if(a>b) tai+=3;
     else if(a==b) 
     {
       tai+=1;
       hua+=1;     
     }        
     else hua+=3;       
   }
   cout<<tai<<" "<<hua<<endl;
   //while(1);
   return 0;
 }

 