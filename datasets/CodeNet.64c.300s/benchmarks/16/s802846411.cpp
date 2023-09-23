#include <iostream>
using namespace std;

int main() {

long long int N;
cin >> N;

long long int ans = -1000000000000000;

long long int m = 1000000000000000;

for ( long long int i = 0; i < N; i++ ) {
long long int in;
cin >> in;
if ( i != 0 ) {
ans = max( ans, in - m );
}
m = min( m, in );
}

cout << ans << endl;
return 0;

}