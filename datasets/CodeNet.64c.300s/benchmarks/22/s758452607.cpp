#include <iostream>
using namespace std;

const char* judge_right_triangle(int, int, int);

int main(void)
{
    int a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++ ) {
        cin >> a >> b >> c;
        cout << judge_right_triangle(a, b, c) << endl;
    }
    return 0;
}

const char* judge_right_triangle(int a, int b, int c)
{
    if ((a * a + b * b == c * c || b * b + c * c == a * a) || c * c + a * a == b * b) {
        return "YES";
    } else {
        return "NO";
    }
}