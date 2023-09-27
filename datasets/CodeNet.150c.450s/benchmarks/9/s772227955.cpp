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
   string str;
   while(cin>>str)
   {
     if(str=="-") break;
     else
     {
       int count;
       cin>>count;
       while(count--)
       {
         int inter;
         cin>>inter;
         string a=str.substr(0,inter);
         string b=str.substr(inter);
         str=(b+a);              
       }    
     }      
     cout<<str<<endl;         
   }
   //while(1);
   return 0;
 }