#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  while(cin>>n,n!=0){
    vector<int>num(n);
    for(int i=0;i<n;i++)
      cin>>num[i];
    sort(num.begin(),num.end(),greater<int>());
    int min=1000000000;
    for(int i=1;i<n;i++){
      if(min>num[i-1]-num[i])
	min=num[i-1]-num[i];
    }
    cout<<min<<endl;
  }
  return 0;
}