#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int data[101]={},n,num=0;
	while(cin >> n) data[n]++;
	for(int i=1;i<=100;i++)if(data[i]>num)num=data[i];
	for(int i=1;i<=100;i++)if(data[i]==num)cout<<i<<endl;
  return 0;
}