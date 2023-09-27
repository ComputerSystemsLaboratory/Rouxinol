#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 101;
    vector<int> numbers(size, 0);
    vector<int> result;

    for (int n; cin >> n;)
        numbers[n]++;

    int max = 0;
    for (int i = 0; i < size; i++)
        if (numbers[i] == max)
            result.push_back(i);
        else if (numbers[i] > max) {
            max = numbers[i];
            result.clear();
            result.push_back(i);
        }

    for (int n: result)
        cout << n << endl;

    return 0;
}