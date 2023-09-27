#include <iostream>
using namespace std;

int main(){
  int n,q,a[10000+1],key,cnt=0;
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];
  cin >> q;
  for(int j=0;j<q;j++){
    cin >> key;
    for(int i=0;i<n;i++){
      if(a[i]==key){
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}