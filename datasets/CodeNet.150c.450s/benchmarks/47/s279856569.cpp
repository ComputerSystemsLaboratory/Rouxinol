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
 
 bool judge(int w,int h,int x,int y,int r)
 {
   if(x-r>=0&&x+r<=w&&y-r>=0&&y+r<=h) return true;
   else return false;
 }
 
 int main()
 {
   int x,y,w,h,r;
   cin>>w>>h>>x>>y>>r;
   bool flag=judge(w,h,x,y,r);
   if(flag) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   //while(1);
   return 0;
 }
 