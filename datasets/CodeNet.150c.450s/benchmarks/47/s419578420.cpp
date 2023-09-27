#include<iostream>
#include<vector>
using namespace std;

int i;
int main(){
vector<int>a(5);
for (i=0;i<5;i++){
  cin >> a[i];
}
if (a[2]+a[4]<=a[0] && a[2]-a[4]>=0 && a[3]+a[4]<=a[1] && a[3]-a[4]>=0){
  cout << "Yes" << endl;
} else {
  cout << "No" << endl;
}
return 0;
}
