#include <iostream>
#include <cstdio>
#include<string>
#include<vector>
using namespace std;
int main(){
   string str;
   int cnt=0;
   long long menseki[20001]={0};int men=0;
   vector<int> deep(20001,0);
   char flag=false;
   cin>>str;
   if(str[0]=='\\')deep[0]++;
   else if(str[0]=='/')deep[0]--;
   for(int i=1;i<str.size();++i){
	   if(str[i-1]=='\\'&&str[i]=='/'||str[i-1]=='_'&&str[i]=='\\'||str[i-1]=='/'&&str[i]=='\\'||str[i-1]=='/'&&str[i]=='_'||str[i]=='_'&&str[i-1]=='_')
		   deep[i]+=deep[i-1];
	   else if(str[i-1]=='\\'&&str[i]=='_')deep[i]+=deep[i-1]+1;
	   else if(str[i]=='\\')deep[i]+=deep[i-1]+1;
	   else if(str[i]=='/')deep[i]+=deep[i-1]-1;
   }
   for(int i=0;i<str.size();++i){//i=始点
       if(str[i]=='\\'){
           for(int j=i;j<str.size();++j){//j=終点
               if(deep[i]==deep[j]&&str[j]=='/'){
                   for(int k=i;k<=j;++k){//始点<=k<=終点
                   if(deep[k]-deep[j]!=0) menseki[men]+=(deep[k]-deep[j])*10;
				   else if(str[k]=='_')menseki[men]+=10;
				   if(str[k]=='/'||str[k]=='\\')menseki[men]+=5;
				   }
                       i=j;
                       men++;
                       break;
                   }
           }
           
       }
       
   }
   int sum=0;
   for(int i=0;i<men;++i){
	   sum+=menseki[i]/10;
   }
   cout<<sum<<endl<<men;

   for(int i=0;i<men;++i){
       cout<<" "<<menseki[i]/10;
       }cout<<endl;
   return 0;
}
