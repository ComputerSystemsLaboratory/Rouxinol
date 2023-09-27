#include<iostream>
using namespace std;

int main()
{
  int n,x;
  while(1){
    int count =0;
    cin >> n >> x;
    if(n==0 && x==0) break;
    for(int i=3;i<=n;i++){
      for(int j=2;j<i;j++){
	for(int k=1;k<j;k++){
	  if(i+j+k==x) count++;
	}
      }
    }
    cout << count << endl;
  }
  return 0;
}