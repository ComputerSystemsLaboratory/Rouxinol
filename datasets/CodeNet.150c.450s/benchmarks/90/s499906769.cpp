#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n, m = 0;
int a[101];
vector<int> ans;
for(int i=1 ; i <= 100 ; i++){
a[i] = 0;
}
while( cin >> n ){
a[n]++;
}
for(int i=1 ; i <= 100 ; i++){
m = max( a[i] , m );
}
for(int i=1 ; i <= 100 ; i++){
if( m == a[i] ) ans.push_back(i);
}
for(int i=0 ; i < ans.size() ; i++ ){
cout << ans[i] << endl;
}
}