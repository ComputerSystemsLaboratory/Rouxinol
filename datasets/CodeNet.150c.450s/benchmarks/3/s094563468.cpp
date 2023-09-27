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
   string s;
   int order;
   cin>>s>>order;
   while(order--)
   {
     string cmd;
     cin>>cmd;
     if(cmd=="replace")
     {
       int start,end;
       string change;
       cin>>start>>end>>change;
       string a=s.substr(0,start);
       string b=s.substr(start,end-start+1);
       string c=s.substr(end+1);
       s=a+change+c;     
       //cout<<s<<endl;             
     }              
     else if(cmd=="reverse")
     {
       int start,end;
       cin>>start>>end;
       string a=s.substr(0,start);
       string b=s.substr(start,end-start+1);
       //cout<<b<<endl;
       string c=s.substr(end+1);
       for(int i=0;i<b.length()/2;i++) swap(b[i],b[b.length()-i-1]);
       s=a+b+c;    
       //cout<<s<<endl;   
     }
     else
     {
       int start,end;
       cin>>start>>end;
       string b=s.substr(start,end-start+1);
       //cout<<s<<endl; 
       cout<<b<<endl;    
     }
   }
   //while(1);
   return 0;
 }

 