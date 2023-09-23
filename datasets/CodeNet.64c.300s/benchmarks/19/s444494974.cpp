#include <iostream>

using namespace std;

int main(){
  int n;
  while(true){
    cin>>n;
    if(!n)break;
    int seq[n];
    for(int i=0;i<n;i++)
      cin>>seq[i];
    int max = -1e9;
    for(int i=0;i<n;i++){
	int sum = 0;
      for(int j=i;j<n;j++){
	  sum+=seq[j];
	if(sum>max)max = sum;
      }
    }
    cout << max << endl;
  }
  return 0;
}