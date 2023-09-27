 
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
   map<string,int> mymap;
   int max=0;
   int fre=-100000000;
   string str;
   string str_max;
   string str_fre;
   while(cin>>str)
   {
     if(str.length()>max) 
     {
       max=str.length();
       str_max=str;                     
     }             
     mymap[str]++;      
   }             
   map<string,int>::iterator  iter;  
   for(iter = mymap.begin();iter!= mymap.end(); iter++)  
   {  
     if(iter->second>fre) 
     {
       str_fre=iter->first;
       fre=iter->second;                     
     }  
   }  
   cout<<str_fre<<" "<<str_max<<endl;
   //while(1);     
   return 0;  
 }
 