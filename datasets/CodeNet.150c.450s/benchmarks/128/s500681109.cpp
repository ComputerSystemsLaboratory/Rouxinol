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
 
 using namespace std;

 int main()
 {
   string str;
   cin>>str;
   for(int i=0;i<str.length()/2;i++) swap(str[i],str[str.length()-i-1]);
   cout<<str<<endl;
   //while(1);      
   return 0;    
 }
 
 