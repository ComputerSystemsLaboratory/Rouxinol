#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    int count = 0;

    do
    {
        if (count > 0)
            cout << "Case " << count << ": " << value << endl;

        ++count;
        cin >> value;
        
    } while(value != 0);
    
    return 0;
}