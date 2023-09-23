#include <iostream>
using namespace std;

int main()
{
    int tmp , i;
    cin >> tmp;
    for(i = 1; tmp != 0; i++){
        cout << "Case " << i << ": " << tmp << '\n';
        cin >> tmp;
    }

}