 
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
   multiset<string> kk;
   int max=0;
   int fre=-100000000;
   string str;
   string str_max;
   string str_fre;
   multiset<string>::iterator iter; 
   while(cin>>str)
   {
     if(str.length()>max) 
     {
       max=str.length();
       str_max=str;                     
     }             
     kk.insert(str);      
   }              
   for(iter = kk.begin();iter!= kk.end(); iter++)  
   {  
     string str=*iter;
     int num=kk.count(str);
     if(num>fre) 
     {
       fre=num;
       str_fre=str;                
     }
   }  
   cout<<str_fre<<" "<<str_max<<endl;
   //while(1);     
   return 0;  
 }
 