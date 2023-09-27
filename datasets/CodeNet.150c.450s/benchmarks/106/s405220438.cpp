#include<iostream>
#include<vector>

using namespace std;

int main(){
  int a,b,c;
  int n=0;
  std::vector<int> dividor;

  cin>>a>>b>>c;

  for(int i=1; i<=c; i++){
    if(c%i==0){
      dividor.push_back(i);
    }
  }

  int size=dividor.size();

  for(int i=a; i<=b; i++){
    for(int j=0; j<size; j++){
      if(i==dividor[j]){
        n=n+1;
      }
    }
  }
  cout<<n<<endl;

  return 0;
}