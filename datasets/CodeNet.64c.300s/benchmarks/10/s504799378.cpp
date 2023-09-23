#include <bits/stdc++.h>
using namespace std;
int main() {
for (int i = 0; i < 3000; i++){
int x, y; 
cin >> x >> y; 
if(x == 0 && y == 0) break; 
else{
if(x > y) swap(x, y); 
cout << x << " " << y << endl; 
}
}
}
