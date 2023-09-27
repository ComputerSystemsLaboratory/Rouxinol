#include <iostream>
using namespace std;
int main() {
int r,c,rs[101],cs;
cin >> r >> c;
int h[101][101];
for (int i = 0; i<r; i++) {
for (int j = 0; j<c; j++) {
cin >> h[i][j];
}
}
for (int i = 0; i < 101; i++) {
rs[i] = 0;
}
for (int i = 0; i <= r; i++) {
cs = 0;
for (int j = 0; j <= c; j++) {
if (i != r) {
if(j!=c)cs += h[i][j];
if (j != c)rs[j] += h[i][j];
if (j == c) cout << cs << endl;
else cout << h[i][j] << " ";
}
else {
if (j != c)cs += rs[j];
if (j == c) cout << cs << endl;
else cout << rs[j] << " ";
}
}
}
}

