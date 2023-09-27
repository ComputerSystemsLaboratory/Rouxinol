#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int t;
vector<int> a;
for(int i=0;i<3;i++){
cin >> t;
a.push_back(t);
}
sort(a.begin(),a.end());
cout << a[0]<< " " << a[1] << " "<<a[2]<<endl;
return 0;
}