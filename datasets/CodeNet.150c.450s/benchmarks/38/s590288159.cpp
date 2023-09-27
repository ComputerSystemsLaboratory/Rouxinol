#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
vector<int> v(3);
cin >> n;
for(int i = 0; i < n; i++){
cin >> v[0] >> v[1] >> v[2];
sort(v.begin(), v.end());
if(v[2]*v[2] == v[0]*v[0]+v[1]*v[1]){
cout << "YES" << endl;
}else{
cout << "NO" << endl;
}
}
}