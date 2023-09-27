#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int n;
    while(cin >> n)
    {
        numbers.push_back(n);
    }
    sort(numbers.rbegin(), numbers.rend());
    cout << numbers[0];
    for(int i=1; i<numbers.size(); i++)
    {        
        cout << " " << numbers[i];
    }
    cout << endl;
    return 0;
}