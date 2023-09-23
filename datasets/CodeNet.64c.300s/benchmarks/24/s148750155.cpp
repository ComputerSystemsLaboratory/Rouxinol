#include<iostream>
using namespace std;
int i, n, pA, pB, tA = 0, tB = 0;
int main(){
while(cin >> n) {
if(n == 0) { break; }
for (i=1; i<=n; i++) {
cin >> pA >> pB;
if (pA > pB) {
tA += pA + pB;
} else {
if (pA < pB) {
tB += pA + pB;
} else {
tA += pA;
tB += pB;
}
}
}
cout << tA << " " << tB << endl;
tA = 0; tB = 0;
}
return 0;
}