#include <iostream>
using namespace std;

int main()
{
    const int kMaxNum = 100;
    int array[kMaxNum];

    int num = 0;
    cin >> num;
    
    for (int i=0; i<num; ++i)
    {
        cin >> array[i];
    }
    for (int i=0; i<num; ++i)
    {
        if (i != 0) cout << " ";
        cout << array[num-1 -i];
    }
    cout << endl;
    
    return 0;
}