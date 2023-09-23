#include <iostream>
#include <algorithm>
using namespace std;
int main() {

int a, b;
cin >> a >> b;

int aCopy = std::max(a, b);
int bCopy = std::min(a, b);

int r = 0;
while (bCopy != 0) {
r = aCopy % bCopy;
aCopy = bCopy;
bCopy = r;

}

cout << aCopy << endl;

return 0;
}