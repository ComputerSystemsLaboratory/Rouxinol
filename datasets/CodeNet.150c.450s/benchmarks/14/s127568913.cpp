#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
for (int i = 1; i <=n ; i++) {
if ( i % 3 ==0 || i % 10 == 3) {
cout << " " << i;
}else {
int p = i;
while(p / 10 != 0){
p /= 10;
if (p % 10 == 3) {
cout << " " << i;
break;
}
}
}} cout << endl;

return 0;
}
