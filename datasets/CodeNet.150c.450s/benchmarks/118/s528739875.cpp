#include <iostream>
#include <map>
using namespace std;

struct data{
    int y,m,d;
    void set(int y,int m,int d){
        this->y = y;
        this->m = m;
        this->d = d;
    }
};

bool operator<(const data& d1, const data& d2){
    if(d1.y == d2.y){
        if(d1.m == d2.m){
            return d1.d < d2.d;
        }
        return d1.m < d2.m;
    }
    return d1.y < d2.y;
}

map<data, int> memo;

int main() {

    int count = 0;
    int maxd = 0;

    for(int y=1; y<1000; y++){
        for(int m=1; m<=10; m++){
            int limit = 20;
            if(y%3 != 0 && m%2 == 0){
                limit = 19;
            }
            for(int d=1; d<=limit; d++){
                count++;
                data d1;
                d1.set(y, m, d);
                memo[d1] = count;
                maxd = count;
            }
        }
    }


    int n;
    cin >> n;

    for(int loop = 0; loop < n; loop++){

        int y,m,d;

        cin >> y >> m >> d;

        data input;
        input.set(y, m, d);

        cout << maxd - memo[input] + 1 << endl;

    }


    return 0;
}
