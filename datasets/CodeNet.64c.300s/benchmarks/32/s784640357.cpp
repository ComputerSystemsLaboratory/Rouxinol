#include <iostream>
using namespace std;

int main(){
  int num;
  int i;
  int min = 1000001;
  int max = -1000001;
  long int sum = 0;
  cin>>num;
  int tmp;
  for(i=0;i<num;i++){
    cin >> tmp;
    if(tmp>max){
      max = tmp;
    }
    if(tmp<min){
      min =tmp;
    }
    sum += tmp;
  }

  cout<<min<<" "<<max <<" "<<sum<<endl;
  return 0;
}