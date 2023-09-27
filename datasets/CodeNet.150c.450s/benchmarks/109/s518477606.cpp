 #define _USE_MATH_DEFINES
 #define INF 100000000
 #include <iostream>
 #include <cstdio>
 #include <sstream>
 #include <cmath>
 #include <cstdlib>
 #include <algorithm>
 #include <queue>
 #include <stack>
 #include <limits>
 #include <map>
 #include <string>
 #include <cstring>
 #include <set>
 #include <deque>
 #include <bitset>
 #include <list>

 using namespace std;

 typedef long long ll;
 typedef pair <int,int> P;

 static const double EPS = 1e-8;

int hour2second(int h,int m,int s){
  return h*60*60+m*60+s;
}

int main(){
   int n;
   while(~scanf("%d",&n)){
     if(n==0) break;

     vector<int> departure_times;
     vector<int> arrive_times;
     for(int i=0;i<n;i++){
       //hh:mm:ss hh:mm:ss 
       int hh[2],mm[2],ss[2];
       scanf("%d:%d:%d %d:%d:%d",
	     hh,mm,ss,hh+1,mm+1,ss+1);
       int departure_second = hour2second(hh[0],mm[0],ss[0]);
       int arrive_second = hour2second(hh[1],mm[1],ss[1]);

       departure_times.push_back(departure_second);
       arrive_times.push_back(arrive_second);
     }
     sort(departure_times.begin(),departure_times.end());
     sort(arrive_times.begin(),arrive_times.end());
     
     int dep_idx = 0;
     int res = 0;
     int count = 0;     
     for(int arv_idx=0;arv_idx<arrive_times.size();arv_idx++){
       while(dep_idx<departure_times.size()){
	 if(departure_times[dep_idx] < arrive_times[arv_idx]){
	   count++;
	   dep_idx++;
	   res = max(res,count);
	 }
	 else{
	   count--;
	   break;
	 }
       }
     }
     printf("%d\n",res);
   }
}