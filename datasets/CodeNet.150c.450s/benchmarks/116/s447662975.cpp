#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  int k;
  int temp;

  while(cin>>n>>k,n,k){
    vector<int> data;
    int max=0;

    for(int i=0;i<n;++i){
      cin>>temp;
      data.push_back(temp);
    }
    
    for(int i=0;i<n-k+1;++i){
      int total=0;
      for(int j=i;j<k+i;++j){
	total+=data[j];
      }
      if(max<total)
	max=total;
    }
    cout<<max<<endl;
  }
} 