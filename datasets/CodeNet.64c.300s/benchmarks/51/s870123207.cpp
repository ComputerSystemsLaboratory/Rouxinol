#include <iostream>
using namespace std;

int main(){

int n;
long long x;
long long sum=1;

cin >> n;

for(x=1; x<=n; x++)
{
 sum = sum * x;         
}    

cout << sum << endl;

return 0;

}