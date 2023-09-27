#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
 
using namespace std;
 
int main()
{
vector<array<int, 2>> a;
array<int, 2> b;
 
do
{
	cin >>b[0] >>b[1];
	a.push_back(b);
}while(!(b[0] == 0 && b[1] == 0));

for(int i=0; i<a.size()-1; ++i)
{
	sort(a[i].begin(), a[i].end());
	cout <<a[i][0] <<" "<<a[i][1] <<endl;
}
 
return 0;
}