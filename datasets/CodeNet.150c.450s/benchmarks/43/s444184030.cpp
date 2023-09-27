#include <iostream>

int score_a, score_b;

int main(void)
{
    using namespace std;
    int n, data_a, data_b;

    while(1)
    {
        cin >> n;
        if(!n) break;
        score_a = 0;
        score_b = 0;
        for(; n > 0 ; n--) {
            cin >> data_a;
            cin >> data_b;
            if (data_a > data_b) {
                score_a += (data_a + data_b);
            } else if(data_a < data_b) {
                score_b += (data_a + data_b);
            } else {
                score_a += data_a;
                score_b += data_b;
            }
        }
        cout << score_a << " " << score_b << endl;
    }

    return 0;
}