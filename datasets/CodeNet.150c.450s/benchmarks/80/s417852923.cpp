// Example program
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int a; int b; int c; int d; int e; int f; int g; int h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
   vector<int>v{a+b+c+d,e+f+g+h};
   sort(v.begin(),v.end());
   cout << v[1] << endl;
}