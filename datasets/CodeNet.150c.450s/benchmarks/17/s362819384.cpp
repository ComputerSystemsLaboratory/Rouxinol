#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int          input;
    vector<int>  array;
    for (int i=0; i<5; ++i) {
        cin >> input;
        array.push_back(input);
    }
    sort(array.begin(), array.end(), greater<int>());
    for (unsigned int i=0; i<5; ++i) {
        cout << array[i];
        cout << (i==4 ? '\n' : ' ');
    }
}
    