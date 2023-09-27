#include<string>
#include<iostream>
using namespace std;

int main()
{
string str,str2;
string str3;
string str4;
int n,m,d;
cin>>str;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>str2;
cin>>m>>d;
if(str2=="print"){
cout<<str.substr(m,d-m+1)<<endl;
}
else if(str2=="reverse"){
str4=str.substr(m,d-m+1);
str3=str4;
int wp=str4.size();
for(int j=0;j<wp;j++)
{
str[j+m]=str4[wp-j-1];
}



}
else if(str2=="replace"){
cin>>str3;
str=str.replace(m,d-m+1,str3);
}

}


return 0;
}