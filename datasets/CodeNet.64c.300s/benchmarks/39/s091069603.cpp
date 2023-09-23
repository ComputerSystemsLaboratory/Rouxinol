#include <iostream>
using namespace std;

int main()
{
    for (int n, count; cin >> n; cout << count << endl) {
        count=0;
        if (n<=36) {
            for (int a=0; a<10; a++) {
                for (int b=0; b<10; b++) {
                    for (int c=0; c<10; c++) {
                        for (int d=0; d<10; d++) {
                            if (a+b+c+d>n) {
                                break;
                            }
                            else if (a+b+c+d==n) {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}