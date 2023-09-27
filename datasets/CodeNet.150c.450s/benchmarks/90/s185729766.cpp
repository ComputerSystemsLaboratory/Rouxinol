#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    map<int, int> numbers;
    while (cin >> n) {
        numbers[n]++;
    }
    int maxMode = 0;
    vector<int> maxNumber;
    for (map<int,int>::iterator it=numbers.begin(); it != numbers.end(); ++it) {
        if (it->second > maxMode) {
            maxMode = it->second;
            maxNumber.clear();
            maxNumber.push_back(it->first);
        }
        else if (it->second == maxMode) {
            maxMode = it->second;
            maxNumber.push_back(it->first);
        }
    }
    for (int i = 0; i != maxNumber.size(); ++i) {
        cout << maxNumber[i] << endl;
    }
    return 0;
}