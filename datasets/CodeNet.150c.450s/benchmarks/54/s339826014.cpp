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
   string word,str;
   cin>>word;
   for(int i=0;i<word.length();i++)
   {
     if(word[i]>='A'&&word[i]<='Z') word[i]=('a'+word[i]-'A');        
   }
   int count=0;
   while(cin>>str)
   {
     if(str=="END_OF_TEXT") break;
     else
     {
       for(int i=0;i<str.length();i++)
       {
         if(str[i]>='A'&&str[i]<='Z') str[i]=('a'+str[i]-'A');        
       }
       string kk=word+".";
       if(str==word||str==kk) count++;      
     }                       
   }
   cout<<count<<endl;
   //while(1);
   return 0;
 }

 
 