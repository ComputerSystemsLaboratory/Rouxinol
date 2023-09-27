 
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
   int N;
   cin>>N;
   while(N--)
   {
     int arr[10];
     int left[10],right[10];
     bool flag=true;
     int cnt1,cnt2;
     cnt1=cnt2=0;
     for(int i=0;i<10;i++) cin>>arr[i];
     for(int i=0;i<10;i++)
     {
       if(i==0) left[cnt1++]=arr[i];
       else
       {
         if(cnt2==0)
         {
           if(left[cnt1-1]<arr[i]) left[cnt1++]=arr[i];
           else right[cnt2++]=arr[i]; 
         }
         else
         {
           int left_win=arr[i]-left[cnt1-1];
           int right_win=arr[i]-right[cnt2-1];
           if(arr[i]<min(left[cnt1-1],right[cnt2-1]))
           {
             flag=false;
             break;                                          
           }    
           else if(arr[i]>left[cnt1-1]&&arr[i]<right[cnt2-1]) left[cnt1++]=arr[i];
           else if(arr[i]<left[cnt1-1]&&arr[i]>right[cnt2-1]) right[cnt2++]=arr[i];
           else
           {
             if(right_win>left_win) left[cnt1++]=arr[i];
             else right[cnt2++]=arr[i];    
           }
         }   
       }        
     }
     if(flag) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   }
   //while(1);     
   return 0;  
 }
 