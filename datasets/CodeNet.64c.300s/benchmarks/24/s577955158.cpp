#include <iostream>

using namespace std;

int main()
{
    int n=0;
    while(cin >> n, n!=0){
        int a_score=0, b_score=0;
        for (int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            if (a>b){
                a_score += (a+b);
            } else if (b > a){
                b_score += (a+b);
            } else {
                a_score += a;
                b_score += b;
            }
        }
        cout << a_score << " " << b_score << endl;
    }
    return 0;
}