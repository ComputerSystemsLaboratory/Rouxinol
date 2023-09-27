#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> a;
int n;

cin >> n;

a.resize(n);

for(int i=0; i<n; i++)cin >> a[i];

sort(a.begin(),a.end());

cout << a[0];
for(int i=1; i<n; i++)cout << ' ' << a[i];
cout << endl;


return 0;
}