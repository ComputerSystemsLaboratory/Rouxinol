#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string a,b,c;
    int a1,b1,sum=0;
    cin>>a>>b;
    for(int j=0;j<a.size();j++){
      if(a[j]=='m'||a[j]=='c'||a[j]=='x'||a[j]=='i'){
	a[j]=='m'&&(sum+=1000);
	a[j]=='c'&&(sum+=100);
	a[j]=='x'&&(sum+=10);
	a[j]=='i'&&(sum+=1);
      }
      else {
	a[j+1]=='m'&&(sum+=(a[j]-'0')*1000);
	a[j+1]=='c'&&(sum+=(a[j]-'0')*100);
	a[j+1]=='x'&&(sum+=(a[j]-'0')*10);
	a[j+1]=='i'&&(sum+=(a[j]-'0'));
	j++;
      }
    }
    for(int j=0;j<b.size();j++){
      if(b[j]=='m'||b[j]=='c'||b[j]=='x'||b[j]=='i'){
	b[j]=='m'&&(sum+=1000);
	b[j]=='c'&&(sum+=100);
	b[j]=='x'&&(sum+=10);
	b[j]=='i'&&(sum+=1);
      }
      else {
	b[j+1]=='m'&&(sum+=(b[j]-'0')*1000);
	b[j+1]=='c'&&(sum+=(b[j]-'0')*100);
	b[j+1]=='x'&&(sum+=(b[j]-'0')*10);
	b[j+1]=='i'&&(sum+=(b[j]-'0'));
	j++;
      }
    }
    if(sum>=1000){
      if(sum>=2000)cout<<sum/1000;
      cout<<'m';
      sum%=1000;
    }
    if(sum>=100){
      if(sum>=200)cout<<sum/100;
      cout<<'c';
      sum%=100;
    }
    if(sum>=10){
      if(sum>=20)cout<<sum/10;
      cout<<'x';
      sum%=10;
    }
    if(sum>=1){
      if(sum>=2)cout<<sum;
      cout<<'i';
    }
    cout<<endl;
  }
  return 0;
}