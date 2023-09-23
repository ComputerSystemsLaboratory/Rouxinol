#include <iostream>
using namespace std;

void call(int n) {
    for(int i=1;i<n+1;i++)
    {
        if( i%3==0 )
        {
            cout << " " << i;
        }
        else
        {
            int x = i;
            while(x>0)
            {
                if( x%10==3 )
                {
                    cout << " " << i;
                    break;
                }
                x = x/10;
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    call(n);
}