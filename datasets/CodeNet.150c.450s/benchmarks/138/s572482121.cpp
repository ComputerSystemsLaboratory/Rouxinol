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
 
 int gcd(int x,int y)
 {
   return y==0 ? x: gcd(y,x%y);    
 }
 
 int main()
 {
   int x,y;
   cin>>x>>y;
   int result=gcd(x,y);
   cout<<result<<endl;
   //while(1);
   return 0;
 }
 
 
 