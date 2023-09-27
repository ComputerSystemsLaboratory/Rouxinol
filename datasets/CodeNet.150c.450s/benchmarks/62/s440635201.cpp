#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

 int a;
 int b;
 int c;
 vector<int> v;
 
 cin >> a >> b >> c;

 v.push_back ( a );
 v.push_back ( b );
 v.push_back ( c );

 sort(v.begin(), v.end());

 a = v[0];
 b = v[1];
 c = v[2];

 cout << a << " " << b << " " << c << endl;

}