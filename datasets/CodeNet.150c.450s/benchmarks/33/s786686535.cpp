#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

string str;

int main()
{
  int i,j;//2????????????????¨????
  int x,y,s;
  int max=0;
  int a,b;//2????????????????¨????

 while(1){
  cin>>x>>y>>s;
  if(x==0&& y==0&&s==0)break;
  max=0;
  for(i=1;i<s;i++)
    //    cout<<'B'<<endl;
    for(j=1;j<=i;j++){
      a=i*(100+x)/100;
      b=j*(100+x)/100;
      //      cout<<'C'<<endl;
      if(a+b==s){
	//	cout<<'D'<<endl;
	//	cout<<'A'<<a<<" "<<b<<endl;
	a=i*(100+y)/100;
	b=j*(100+y)/100;

	if(max<a+b)
	  max=a+b;

	//	cout<<max<<'M'<<endl;
	//	cout<<'I'<<i<<" "<<j<<endl;

      }
    }
  cout<<max<<endl;     
 }
}