#include <iostream>
using namespace std;
int main(){
int i;
for (i = 1;; i++) {
int x;
cin >> x;
if (x == 0) break;
cout << "Case " << i << ": " << x << "\n";
}
return 0;
}