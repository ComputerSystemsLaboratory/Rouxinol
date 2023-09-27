#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<b&&b<c){cout<<"Yes"<<endl;}
else if (a<=c&&c<=b){cout<<"No"<<endl;}
else if (b<=a&&a<=c){cout<<"No"<<endl;}
else if (b<=c&&c<=a){cout<<"No"<<endl;}
else if (c<=a&&a<=b){cout<<"No"<<endl;}
else if (c<=b&&b<=a){cout<<"No"<<endl;}
else if (a<=c&&c<=b){cout<<"No"<<endl;}

	return 0;
}