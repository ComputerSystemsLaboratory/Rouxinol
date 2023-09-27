#include <iostream>

using namespace std;

int main(){
int h,m,s;
cin>>s;
h=s/3600;
m=(s-h*3600)/60;
s=s-h*3600-m*60;
cout<<h<<":"<<m<<":"<<s<<endl;
return 0;
}
