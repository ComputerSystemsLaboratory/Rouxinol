#include <iostream>
using namespace std;

void call(int n)
{
    int i;
    for(i = 1; i <=n; i++){
        int tmp = i;
        if(tmp % 3 == 0)
            cout << ' ' << i;
        else for(; tmp; tmp /=10)
                if(tmp % 10 == 3){
                    cout << ' ' << i;
                    break;
                }
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;
    call(n);
}