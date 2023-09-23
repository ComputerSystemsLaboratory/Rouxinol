#include <bits/stdc++.h>

using namespace std;

int main()
{
    int data_num;

    while (cin >> data_num) {
        if (data_num == 0) break;

        int player1_ans = 0;
        int player2_ans = 0;
        
        for (int i = 0; i < data_num; ++i) {
            int data1, data2;
            
            cin >> data1 >> data2;
            
            if (data1 > data2) {
                player1_ans += data1 + data2;
            } else if (data1 == data2) {
                player1_ans += data1;
                player2_ans += data2;
            } else {
                player2_ans += data1 + data2;
            }

        }

        cout << player1_ans << " " << player2_ans << endl;

    }
    
    return 0;
}