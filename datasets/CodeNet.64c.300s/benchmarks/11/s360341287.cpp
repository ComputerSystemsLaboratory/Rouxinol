#include<iostream>
using namespace std;

int main()
{
 int h,m,s;
 cin>>s;
 h=s/3600;
 m=s%3600/60;
 cout<<h<<':'<<m<<':'<<s%3600%60<<'\n';

 return 0;
}