#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
vector<int> a;
int b =0;
 
do
{
	cin >>b;
	a.push_back(b);
}while(b != 0);

for(int i=1; a[i-1] != 0; ++i)
{
	cout <<"Case " <<i <<": " <<a[i-1] <<endl;
}
 
return 0;
}