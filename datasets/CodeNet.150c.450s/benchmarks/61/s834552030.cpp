#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,a,b,c,x;

  while(cin>>n>>a>>b>>c>>x&&n|a|b|c|x!=0){
    vector<int> y(n);

    for(int i=0;i<n;i++){
      cin >> y[i];
    }

    int count=0;
    int flag=0;

    for(int i=0;i<n;i++){
      if(y[i]==x&&flag==0){
        flag++;
        continue;
      }
      else{
        while(true){
          x = (a*x + b) % c;
          count++;
          if(count > 10000) break;
          if(y[i]==x) break;
        }
      }
      flag++;
    }
    if(count <= 10000)
      cout << count << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}