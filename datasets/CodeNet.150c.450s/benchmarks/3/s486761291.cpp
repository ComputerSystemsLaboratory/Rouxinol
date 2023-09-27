#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){ 

  string str;
  int q;
  string talk,p;
  int a,b;

  cin>>str;
  cin>>q;

  for(int i=0;i<q;i++){
    cin>>talk;
    if(talk=="print"){
      cin>>a>>b;
      for(int j=a;j<=b;j++){
	cout<<str[j];
      }
      cout<<endl;
    }
    else if(talk=="replace"){
      cin>>a>>b>>p;
      for(int j=a;j<=b;j++){
	str[j]=p[j-a];
      }
    }
    else{
      cin>>a>>b;
      for(int j=a;j<=a+(b-a)/2;j++){
	swap(str[j],str[b-(j-a)]);
      }
    }
  }
}