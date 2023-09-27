 
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
   int arr[5];
   for(int i=0;i<5;i++) cin>>arr[i];
   sort(arr,arr+5);
   for(int i=4;i>=1;i--) cout<<arr[i]<<" ";
   cout<<arr[0]<<endl;
   //while(1);      
   return 0;    
 }

 
 