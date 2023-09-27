#include <iostream>
#include <vector>

using namespace std;

int main()
{    
    vector<int> vec;
    int n;
    cin >> n;

    for(int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    for(vector<int>::reverse_iterator itr = vec.rbegin();itr != vec.rend();itr++)
    {
        cout << *itr;
        if(itr + 1 != vec.rend())
        {
            cout << " ";
        }
    }

    cout << endl;

     return 0;
}