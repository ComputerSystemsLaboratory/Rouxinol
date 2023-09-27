#include<iostream>
using namespace std;
int main()
{
int lx,ly,x,y,r;
cin >> lx >> ly >> x >> y >> r;
if(lx>=x+r && 0<=x-r && ly>=y+r && 0<=y-r) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}