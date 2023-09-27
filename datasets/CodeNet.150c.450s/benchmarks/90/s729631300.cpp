#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int input[100] = {0};
    vector <int> output;
    int num;
    
    while (cin >> num) 
        input[num - 1]++;

    int max = 0;
    for (int i = 0; i < 100; i++) 
        if (input[i] > max)
            max = input[i];

    for (int i = 0; i < 100; i++)
        if (input[i] == max)
            output.push_back(i + 1);

    sort(output.begin(), output.end());
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
    
    return 0;
}