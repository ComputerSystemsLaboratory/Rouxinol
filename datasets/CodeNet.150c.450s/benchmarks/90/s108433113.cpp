#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> input(100, 0);
    int num;
    
    while (cin >> num) 
        input[num - 1]++;

    int max = 0;
    for (int i = 0; i < input.size(); i++) 
        if (input[i] > max)
            max = input[i];

    for (int i = 0; i < input.size(); i++)
        if (input[i] == max)
            cout << i + 1 << endl;

    return 0;
}