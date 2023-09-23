#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int tmp;

    while(1)
    {
        cin >> tmp;
        if(tmp == 0){
            break;
        }
        else{
            cout << "Case " << i << ": " << tmp << endl;
            i++;
        }
    }

    return 0;
}

