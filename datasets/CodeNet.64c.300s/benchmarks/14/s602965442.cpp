#include <iostream>
using namespace std;

int main()
{
    int n_input_01, n_input_02;
    cin >> n_input_01 >> n_input_02;

    if(n_input_01 < n_input_02)
    {
        cout << "a < b" << endl;
    }
    else if(n_input_01 > n_input_02)
    {
        cout << "a > b" << endl;
    }
    else
    {
        cout << "a == b" << endl;
    }

    return 0; 
}