#include<iostream>
#include<fstream>

using namespace std;

#define MAX 1000000

int ans[MAX];
int ans_odd[MAX];

int square(int n){
    return n * (n + 1) * (n + 2) / 6;
}

int calc(int n){

    if(ans[n] != MAX)return ans[n];


    int num = 0;
    while(square(num) <= n){
        ans[square(num)] = 1;
        num++;
    }
    num--;

    for(int i = num; i > 0; i--){
        int tmp = calc(n - square(i));
        if(ans[n] > tmp + 1)ans[n] = tmp + 1;
    }

    return ans[n];
}

int calcOdd(int n){
    if(ans_odd[n] != MAX)return ans_odd[n];


    int num = 1;
    while(square(num) <= n){
        ans_odd[square(num)] = 1;
        num+=4;
    }
    num-=4;

    for(int i = num; i > 0; i-=4){
        int tmp = calcOdd(n - square(i));
        if(ans_odd[n] > tmp + 1)ans_odd[n] = tmp + 1;
    }

    return ans_odd[n];
}

int main(){
//    ifstream fin("in.txt");
    int n = 0;

    for(int i = 0; i < MAX; i++){
        ans[i] = ans_odd[i] = MAX;
    }


    while((cin >> n), n){

        cout << calc(n) << " " << calcOdd(n) << endl;
    }

    return 0;
}