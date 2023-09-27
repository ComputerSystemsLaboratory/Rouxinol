#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vi(28);
    for(int i = 0; i < 28; i++) 
        cin >> vi[i];
    
    sort(vi.begin(), vi.end());
    for(int i = 1; i <= 30; i++) 
        if(find(vi.begin(), vi.end(), i) == vi.end())
            cout << i << endl;


}