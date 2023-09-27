// Example program
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
vector<int> v;
int a;
int b;
int c;
cin>>a;
cin>>b;
cin>>c;

v.push_back(a);
v.push_back(b);
v.push_back(c);

sort(v.begin(),v.end());

cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;


 
}