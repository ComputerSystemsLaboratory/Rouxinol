 
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
 
 int arr[101]={0};
  
 int main()
 {
   int N;
   int max=0;
   while(cin>>N) arr[N]++;
   for(int i=1;i<=100;i++) if(arr[i]>max) max=arr[i];
   for(int i=1;i<=100;i++) if(arr[i]==max) cout<<i<<endl;             
   //while(1);     
   return 0;  
 }
 