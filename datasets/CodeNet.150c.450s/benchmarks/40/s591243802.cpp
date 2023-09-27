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
   int up,down,front,back,left,right;
   cin>>up>>front>>right>>left>>back>>down;
   string com;
   cin>>com;
   for(int i=0;i<com.length();i++)
   {
     if(com[i]=='S')
     {
       int temp=down;
       down=front;
       front=up;
       up=back;
       back=temp;               
     }
     else if(com[i]=='W')
     {
       int temp=left;
       left=up;
       up=right;
       right=down;
       down=temp;     
     }
     else if(com[i]=='N')
     {
       int temp=front;
       front=down;
       down=back;
       back=up;
       up=temp;     
     }
     else
     {
       int temp=up;
       up=left;
       left=down;
       down=right;
       right=temp;   
     }        
   }
   cout<<up<<endl;
   //while(1);
   return 0;
 }