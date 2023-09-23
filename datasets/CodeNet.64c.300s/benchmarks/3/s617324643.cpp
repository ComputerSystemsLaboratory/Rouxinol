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
 
 int arr[100+5];
 
 int main()
 {
   int n;
   cin>>n;
   for(int i=0;i<n;i++) cin>>arr[i];
   for(int i=0;i<n/2;i++) swap(arr[i],arr[n-i-1]);
   for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
   cout<<arr[n-1]<<endl;
   //while(1);
   return 0;
 }
 
 