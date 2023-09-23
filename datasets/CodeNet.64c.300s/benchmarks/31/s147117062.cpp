 
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
 
 using namespace std;
 
 int arr[30+1]={0};
  
 int main()
 {
   for(int i=0;i<28;i++) 
   {
     int kk;
     cin>>kk;
     arr[kk]++;        
   }
   for(int i=1;i<=30;i++)
   {
     if(!arr[i]) cout<<i<<endl;         
   }
   //while(1);      
   return 0;    
 }

 