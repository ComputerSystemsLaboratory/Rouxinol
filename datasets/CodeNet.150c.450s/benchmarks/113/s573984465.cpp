#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;
int main(){
  vector<int> a;
  int x;
  cin >> x;
  int i=1;
  while(x!=0){
  	cout << "Case " << i << ": "<<x<<endl;
  	i++;
  	cin>>x;
  }
  return 0;
}
