#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
  map<string,int> judge;
  judge["AC"]=0;
  judge["WA"]=0;
  judge["TLE"]=0;
  judge["RE"]=0;
  string a;
  int b;
  cin>>b;
  while(b){
	  cin>>a;
	  judge[a]++;
	  b--;
  }
  cout<<"AC x "<<judge["AC"]<<endl;
  cout<<"WA x "<<judge["WA"]<<endl;
  cout<<"TLE x "<<judge["TLE"]<<endl;
  cout<<"RE x "<<judge["RE"]<<endl;
}