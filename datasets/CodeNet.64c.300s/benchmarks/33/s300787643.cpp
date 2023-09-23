#include <iostream>

#define MAX_SIZE (1000)

using namespace std;

int main()
{
    int  a, b;
    int  size;
    char op;
    int* ans = new int[MAX_SIZE + 1];
    

    for (int i = 0; i < MAX_SIZE + 1; i++) {
        do {
            cin >> a >> op >> b;
        } while (((a < 0 || a > 20000) || (b < 0 || b > 20000)) || (op == '/' && b == 0));

        if (op == '+') {
            ans[i] = a + b;
        } else if (op == '-') {
            ans[i] = a - b;
        } else if (op == '*') {
            ans[i] = a * b;
        } else if (op == '/') {
            ans[i] = a / b;
        } else if (op == '?') {
            size = i;
            break;
        }       
    }
 
    for (int i = 0; i < size; i++) {
         cout << ans[i] << endl;
    }
     
    delete[] ans;

    return (0);
}