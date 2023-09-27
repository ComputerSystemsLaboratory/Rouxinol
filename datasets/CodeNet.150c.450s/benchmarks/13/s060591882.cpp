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
   string su;
   cin>>str>>su;
   string str2=str+str;
   if(str2.find(su)!=string::npos) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   //while(1);
   return 0;
 }

 
 