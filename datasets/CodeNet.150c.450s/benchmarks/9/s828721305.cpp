#include<bits/stdc++.h>
using namespace std;

string str1,str2,str3;
int main(){
  int i=0,x;
  while(1)
  {
    cin>>str1;
    if(str1=="-") break;
    cin>>i;
    for(int i2=0;i2<i;i2++)
	{
        cin>>x;
	str2=str1.substr(0,x);
	str3=str1.substr(x,str1.size());
	str1=str3+str2;
	//str1.erase( str.begin() , str.begin()+x );
	}
    cout<<str1<<endl;
}
return 0;
}
