#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main(void){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
    string a, b; cin >> a >> b;
    int num;
    int a_num = 0, b_num = 0;
    for(int i = 0; i < a.size(); i++){
        int temp;
        if('2' <= a[i] && a[i] <= '9'){
            temp = (int)a[i] - '0';
            i++;
        }else{
            temp = 1;
        }
        if(a[i] == 'm') a_num += 1000*temp;
        if(a[i] == 'c') a_num += 100*temp;
        if(a[i] == 'x') a_num += 10*temp;
        if(a[i] == 'i') a_num += temp;
    }
    for(int i = 0; i < b.size(); i++){
        int temp;
        if('2' <= b[i] && b[i] <= '9'){
            temp = (int)b[i] - '0';
            i++;
        }else{
            temp = 1;
        }
        if(b[i] == 'm') b_num += 1000*temp;
        if(b[i] == 'c') b_num += 100*temp;
        if(b[i] == 'x') b_num += 10*temp;
        if(b[i] == 'i') b_num += temp;
    }

    num = a_num + b_num;

    int array[4];
    array[3] = num / 1000;
    num %= 1000;
    array[2] = num / 100;
    num %= 100;
    array[1] = num / 10;
    num %= 10;
    array[0] = num;
    
    string c = "ixcm";
    for(int i = 3; i >= 0; i--){
        if(array[i] == 0) continue;
        else if(array[i] == 1){
            cout << c[i];
        }else{
            cout << array[i] << c[i];
        }
    }
    cout << endl;
    }
    return 0;
}