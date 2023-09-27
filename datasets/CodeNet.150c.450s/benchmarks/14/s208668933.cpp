//itp1_5-d
#include <iostream>
using namespace std;

int include3(int x){
 return (! x) ? 0 : (x%10==3 || include3(x/10));
}

int main(){
 int n;
 cin>>n;

 for(int i=1;i<=n;i++){
  if(i%3==0) cout<<" "<<i;
  else if(include3(i)) cout<<" "<<i;
 }
 cout<<endl;
 return 0;
}