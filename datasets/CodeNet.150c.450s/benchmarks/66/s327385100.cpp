#include<iostream>
#include<map>
using namespace std;

int main()
{
 map<string,int> d;
 int n,m;
 cin>>n;
 for(int i=0;i<n;i++)
   {
     string s;
     cin>>s;
     d[s]=1;
   }
 cin>>m;
 bool door =false;
 for(int i=0;i<m;i++)
   {
     string s;
     cin>>s;
     if(d.count(s))
       {
	 if(door)
	     cout<<"Closed by ";
	 else
	     cout<<"Opened by ";
	 door=!door;
       }
     else
       cout<<"Unknown ";
     cout<<s<<endl;
   }
}