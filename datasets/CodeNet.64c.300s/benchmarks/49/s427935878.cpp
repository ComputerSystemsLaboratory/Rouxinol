#include <iostream>

using namespace std;

int main()
{
    int a, b, sum, digit, div;

    while(cin >> a >> b){
        sum = a + b;

        digit = 1;
        div = 10;

        while(sum / div){
            ++digit;
            div *= 10;
        }
	cout << digit << endl;
    }
}