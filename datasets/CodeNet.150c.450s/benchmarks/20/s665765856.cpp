#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int s;
    cin>>s;
    cout<<s/3600<<':'<<s/60%60<<':'<<s%60<<'\n';
    return 0;
}