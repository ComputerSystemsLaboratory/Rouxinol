#include <iostream>
using namespace std;

int main() {
    int num, score, sum, max, min, i;
    while(1){
        cin >> num;
        if(!num)
            break;
        sum=0;
        max=0;
        min=10000;
        for(i=0; i<num; i++){
            cin >> score;
            if(score>max)max=score;
            if(score<min)min=score;
            sum+=score;
        }
        sum-=max;
        sum-=min;
        cout << sum/(num-2) << endl;
    }
    return 0;
}