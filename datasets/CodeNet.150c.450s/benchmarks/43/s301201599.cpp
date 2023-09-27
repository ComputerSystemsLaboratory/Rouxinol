#include <iostream>
using namespace std;
 
int main() {
    int n;

    while(1){
    cin >> n;
    if(n == 0) break;
    int num[10000][2] = {};
    int score[2] = {};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2; ++j){
            cin >> num[i][j];
        }
        if (num[i][0] > num[i][1])
        {
            score[0] += num[i][0] + num[i][1];
        } else if (num[i][0] == num[i][1])
        {
            score[0] += num[i][0];
            score[1] += num[i][1];
        } else{
            score[1] += num[i][0] + num[i][1];
        }
    }

    cout << score[0] << " " << score[1] << endl;
    }

    return 0;
}