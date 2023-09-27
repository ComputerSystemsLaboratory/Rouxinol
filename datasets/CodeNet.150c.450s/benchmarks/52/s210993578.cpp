#include<iostream>
#include<vector>

using namespace std;

int main()
{
int a;
vector<int> array;
for(;cin >> a;)
{
if(a==0)
{
cout << array[array.size()-1] << endl;
array.pop_back();
}
else
array.push_back(a);
}
}