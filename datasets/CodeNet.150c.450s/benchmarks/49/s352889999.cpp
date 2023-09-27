#include <iostream>

using namespace std;

int main() {
    int scores[7];
    int score_length = 0;
    
    int number = 0;
    cin>>number;
    while (number != 0) {
        int max = 0;
        int min = 1000;
        int score = 0;
        int total = 0;
        for (int i = 0; i < number; i++) {
            cin>>score;
            total += score;
            if (score > max) max = score;
            if (score < min) min = score;
        }
        total -= max + min;
        scores[score_length] = total / (number-2);
        score_length++;

        cin>>number;
    }

    for (int i = 0; i < score_length; i++) {
        cout<<scores[i]<<endl;
    }
}