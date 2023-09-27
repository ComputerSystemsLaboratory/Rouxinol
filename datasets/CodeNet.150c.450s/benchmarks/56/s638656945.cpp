#include<iostream>
using namespace std;
int main(){
  int n;
  int a;
  int min=1000000;
  int max=-1000000;
  long long sum=0;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a;
    sum=sum+a;
    if(a<min){
      min=a;
    }
    if(a>max){
      max=a;
    }
  }
  cout << min << " " << max << " " << sum << endl;
}