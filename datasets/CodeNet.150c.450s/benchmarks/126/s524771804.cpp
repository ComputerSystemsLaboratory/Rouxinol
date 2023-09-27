 
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
 
 struct stu
 {
   int x;
   int y;       
 };
 
 stu f;
 
 int dir_x[2]={1,0};
 int dir_y[2]={0,1};
 int start_x,start_y;
 
 int n,m;
 int mapKK[16][16];
 
 int bfs()
 {
   queue<stu> que;
   int count=0;
   f.x=start_x;
   f.y=start_y;
   que.push(f);
   while(que.size())
   {
     stu p=que.front();
     que.pop();
     if(p.x==n-1&&p.y==m-1)
     {
       count++;
     }
     for(int i=0;i<2;i++)
     {
       stu q;
       q.x=p.x+dir_x[i];
       q.y=p.y+dir_y[i];
       if((q.x<n)&&(q.y<m)&&(mapKK[q.x][q.y]!=1)) 
       {
         que.push(q);                                              
       }
     }        
   }      
   return count;
 }
  
 int main()
 {
   //count=0;
   //int map[16][16];
   start_x=start_y=0;
   while(cin>>n>>m&&(m!=0||n!=0))
   {
     for(int i=0;i<n;i++) for(int j=0;j<m;j++) mapKK[i][j]=0;
     int obj;
     cin>>obj;
     while(obj--) 
     {
       int x,y;
       cin>>x>>y;
       mapKK[x-1][y-1]=1;             
     }
     int count=bfs();
     cout<<count<<endl;
   }
   //while(1);      
   return 0;    
 }
 