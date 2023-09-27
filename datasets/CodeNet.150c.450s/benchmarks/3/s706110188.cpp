#include<string>
#include<iostream>
using namespace std;
int main(){
  string str;
  cin>>str;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string inst;
    int a,b;
    cin>>inst>>a>>b;
    if(inst=="replace"){
      string repla;
      cin>>repla;
      for(int j=a,k=0;j<=b;j++,k++)
	str[j]=repla[k];
    }else if(inst=="reverse"){
      char re[str.size()];
      for(int j=a;j<=b;j++)
	re[j]=str[j];
      for(int j=b,k=a;j>=a;j--,k++)
	str[j]=re[k];
    }else{
      for(int j=a;j<=b;j++){
	cout<<str[j];
	if(j==b)
	  cout<<endl;
      }
    }
  }
  return 0;
}