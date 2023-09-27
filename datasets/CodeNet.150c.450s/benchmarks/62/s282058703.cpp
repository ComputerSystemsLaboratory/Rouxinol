// Example program
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    vector<int> v{a,b,c};
    sort(v.begin(),v.end());
    
    int size = v.size();
    for (int i = 0; i < size - 1; i++) {
        cout << v[i] << " ";
    }
    cout << v[2] << endl;
}