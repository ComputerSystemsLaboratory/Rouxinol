 
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
  
 int main()
 {
   int a[4],b[4];
   int sum1,sum2;
   while(cin>>a[0])
   {
     sum1=sum2=0;
     for(int i=1;i<4;i++) cin>>a[i];
     for(int i=0;i<4;i++) cin>>b[i];
     for(int i=0;i<4;i++) sum1+=a[i];
     for(int i=0;i<4;i++) sum2+=b[i];
     if(sum1>sum2) cout<<sum1<<endl;
     else cout<<sum2<<endl;                
   }
   //while(1);      
   return 0;    
 }

 