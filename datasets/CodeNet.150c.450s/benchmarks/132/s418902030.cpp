#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  int p;
  while(cin>>n>>p && n+p){
    vector<int> vec(n);
    int stone=p;
    int pos = 0;
    while(true){
      int i=pos%n;
      pos++;
      if(stone == 0 && vec[i] == p){
	cout<<i<<endl;
	break;
      } 
      if(stone <= 0){
	stone = vec[i];
	vec[i]=0;
      }
      else{
	stone--;
	vec[i]++;
      }
    }
  }
  return 0;
}