#include <iostream>
using namespace std;
struct dice{
    int x[6];
    
    void roll(char c){
        int tmp;
        if(c == 'E'){
            tmp = x[0];
            x[0] = x[3];
            x[3] = x[5];
            x[5] = x[2];
            x[2] = tmp;
        }
        if(c == 'N'){
            tmp = x[0];
            x[0] = x[1];
            x[1] = x[5];
            x[5] = x[4];
            x[4] = tmp;
        }
        if(c == 'S'){
            tmp = x[0];
            x[0] = x[4];
            x[4] = x[5];
            x[5] = x[1];
            x[1] = tmp;
        }
        if(c == 'W'){
            tmp = x[0];
            x[0] = x[2];
            x[2] = x[5];
            x[5] = x[3];
            x[3] = tmp;
        }
        if(c == 'R'){
            tmp = x[1];
            x[1] = x[2];
            x[2] = x[4];
            x[4] = x[3];
            x[3] = tmp;
        }
    }
    int top(void){
        return x[0];
    }
    int right(void){
        return x[2];
    }
    int left(void){
        return x[3];
    }
    int front(void){
        return x[1];
    }
};

int main(void){
    dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.x[i];
    }
    int n;
    cin >> n;
    int t, f;
    for(int i = 0; i < n; i++){
        cin >> t >> f;
        if(d.left() == t)   d.roll('E');
        if(d.right() == t)  d.roll('W');
        while(d.top() != t)   d.roll('N');
        while(d.front() != f) d.roll('R');

        cout << d.right() << endl;    
    }
    return 0;
}

