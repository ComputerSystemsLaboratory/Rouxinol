#include<iostream>
#define MAX 1<<30
using namespace std;

int main(){
  long long int sum = 0;
  long long int max = -MAX;
  long long int min = MAX;
  int n;
  cin>>n;
  while(n--){
    long long int num;
    cin>>num;
    sum += num;
    if(max < num) max = num;
    if(min > num) min = num;
  }
  cout<<min<<' '<<max<<' '<<sum<<endl;
  return 0;
}