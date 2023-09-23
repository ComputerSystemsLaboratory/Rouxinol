#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
        int div;
        ll sum;

        while(cin >> div){
                sum = 0;
                for(int i = div;i<=600-div;i+=div){
                        sum += i*i*div;
                }

                cout << sum << endl;
        }

        return 0;
}