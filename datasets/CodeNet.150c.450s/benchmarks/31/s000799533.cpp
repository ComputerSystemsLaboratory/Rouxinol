#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& array);

int main()
{
    int size;
    vector<int> array;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int tmp;
        cin >> tmp;
        array.push_back(tmp);
    }
    cout << maxProfit(array) << endl;
    return 0;
}

int maxProfit(vector<int>& array)
{
    int min = array[1] > array[0] ? array[0] : array[1];
    int max_val = array[1] - array[0];
    for (int i = 2; i < array.size(); i++) {
        int profit = array[i] - min;
        if (profit > max_val) {
            max_val = profit;
        }
        if (min > array[i]) {
            min = array[i];
        }
    }
    return max_val;
}