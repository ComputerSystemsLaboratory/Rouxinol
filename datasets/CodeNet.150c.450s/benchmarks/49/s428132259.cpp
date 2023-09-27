#include<iostream>
using namespace std;

int main()
{
    int x;
    while(1){
        cin >> x;
        if(x == 0) break;
        int max = -1, mini = 10000, sum = 0, score = 0, y = 0;
        for(int i = 0; i < x; i++){
           cin >> score;
          sum += score;
          if(score > max) max = score;
            if(score < mini) mini = score;
        }
        sum -= max + mini;
        y = sum / (x - 2);
        cout << y << endl;
    }
    return 0;
}