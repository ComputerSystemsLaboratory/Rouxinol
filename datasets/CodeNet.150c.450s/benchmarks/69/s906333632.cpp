#include<iostream>
#include<memory.h>
using namespace std;
int arr[10],used[10];
void DFS(int pre,int cur)
{
   if(cur<10&&arr[pre]<arr[cur])
   {
       used[cur]=1;
       DFS(cur,cur+1);
   }
   else if(cur<10&&arr[pre]>=arr[cur])
       DFS(pre,cur+1);
}
int main()
{
   int T,pre;
   bool judge;
   cin>>T;
   while(T--)
   {
     for(int i=0;i<10;i++)
         cin>>arr[i];
     for(int i=0;i<10;i++)
     {
         memset(used,0,sizeof(used));
         used[i]=1;
         DFS(i,i+1);
         judge=false;
         pre=0;
         for(int j=0;j<10;j++)
            if(used[j]==0)
                if(pre>=arr[j])
            {
                judge=true;
                break;
            }else pre=arr[j];
         if(!judge)
         {
             cout<<"YES"<<endl;
             break;
         }
     }
     if(judge)cout<<"NO"<<endl;
   }

}