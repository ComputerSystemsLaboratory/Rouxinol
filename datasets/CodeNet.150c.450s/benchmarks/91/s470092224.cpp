#include <iostream>
#include <vector>

using namespace std;

constexpr int MAX = 1000000;

int main()
{
    vector<bool> prime_list(MAX, true);
    prime_list.at(0) = false;
    prime_list.at(1) = false;
    for(int i = 2; i * i < MAX; ++i)
    {
        if(!prime_list.at(i))
            continue;
        for(int j = 2; i * j < MAX; ++j)
            prime_list.at(i * j) = false;
    }

    int num;
    int count;
    while(cin >> num)
    {
        count = 0;
        for(int i = 2; i <= num; ++i)
        {
            if(prime_list.at(i))
                count++;
        }
        cout << count << endl;
    }
}