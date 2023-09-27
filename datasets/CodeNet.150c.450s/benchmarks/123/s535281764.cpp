#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int val);
int countPrime(vector<int>& array);

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
    cout << countPrime(array) << endl;
    return 0;
}

int countPrime(vector<int>& array)
{
    int num = 0;
    for (int i = 0; i < array.size(); i++) {
        if (isPrime(array[i])) {
            num++;
        }
    }
    return num;
}

bool isPrime(int val)
{
    if (val <= 1) {
        return false;
    }
    for (int i = 2; i * i <= val; i++) {
        if (val % i == 0) {
            return false;
        }
    }
    return true;
}