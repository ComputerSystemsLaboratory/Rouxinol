 
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
 
 int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  
 int main()
 {
   int m,d;
   int duration;
   while(cin>>m>>d)
   {
     duration=0;
     if(m==0&&d==0) break;
     else
     {
       if(m==1) duration=d-1;
       else 
       {
         for(int i=0;i<m-1;i++) duration+=month[i];
         duration+=(d-1);     
       }    
       if(duration%7==0) cout<<"Thursday"<<endl;
       else if(duration%7==1) cout<<"Friday"<<endl;
       else if(duration%7==2) cout<<"Saturday"<<endl;
       else if(duration%7==3) cout<<"Sunday"<<endl;
       else if(duration%7==4) cout<<"Monday"<<endl;
       else if(duration%7==5) cout<<"Tuesday"<<endl;
       else cout<<"Wednesday"<<endl;
     }                
   }
   //while(1);     
   return 0;  
 }
 