#include <iostream>

using namespace std;

void count_num(int a,int b){
    string WDay[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int len[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int count = 0;
    for(int i = 0; i< a-1;i++){
        count += len[i];
    }
    count += b;
    cout << WDay[(count+2) % 7] << endl;
}

int main() {
    int a,b;
    while(cin >> a >>  b , a){
        count_num(a,b);
    }
    return 0;
}



