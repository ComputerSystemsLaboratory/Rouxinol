#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

int main(){

  map < string, int > str;

  int j=0,a=0,max=0;
  string n,tmp,z,tmp2;

  getline(cin,n);

  for(int i=0; i<n.size(); i++){
    if(n[i]==' '){

      z = n.substr(j,i-j);
      str[z]++;

      if(a <= str[z]){
	a = str[z];
	tmp = z;
      }

      if(tmp2.size() < z.size() ){
	tmp2 = z;
      }

      j=i+1;

    } 

  }

      z = n.substr(j);
      str[z]++;

      if(a <= str[z]){
	a = str[z];
	tmp = z;
      }

      if(tmp2.size() < z.size() ){
	tmp2 = z;
      }   
  cout << tmp << ' ' << tmp2 <<  endl;
}