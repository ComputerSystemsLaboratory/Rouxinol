#include<iostream>
#include<vector>
#define RAND(x) ((a*(x)+b)%c)
using namespace std;

int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x && n){
    vector<int> vec(n);
    for(int i=0;i<n;i++){
      cin>>vec[i];
    }
    int i=0;
    int counter=0;
    for(i=0;i<10001;i++){
      if(vec[counter]==x){
	counter++;
      }
      if(counter==n) break;
      x=RAND(x);
    }
    if(i==10001)
      cout<<-1<<endl;
    else
      cout<<i<<endl;
  }
  return 0;
}