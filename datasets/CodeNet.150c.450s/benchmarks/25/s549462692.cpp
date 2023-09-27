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
   map<char,int> mm;
   for(int i=0;i<26;i++) mm[('a'+i)]=0;
   map<char,int>::iterator iter;
 while(getline(cin,str))
 {
   for(int i=0;i<str.length();i++)
   {
     if(str[i]>='A'&&str[i]<='Z') str[i]=((str[i]-'A')+'a');
     if(str[i]>='a'&&str[i]<='z') mm[str[i]]++;        
   }
 }
   for(iter=mm.begin();iter!=mm.end();iter++)
   {
     char temp=iter->first;
     int kk=iter->second;
     cout<<temp<<" "<<":"<<" "<<kk<<endl;                                          
   }
   //while(1);
   return 0;
 }

 
 