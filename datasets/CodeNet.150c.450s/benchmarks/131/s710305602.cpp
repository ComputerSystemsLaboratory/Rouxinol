#include<bits/stdc++.h>
using namespace std;

int powpow(int x, int y){
    if(y == 0) return 1;
    int ans = x;
    for(int i = 1; i < y; i++){
        ans *= x;
    }
    return ans;
}

int main(){
    while(1){
    int a; cin >> a;
    int L; cin >> L;
    if(a == 0 && L == 0) break;
    vector<int> array;
    array.push_back(a);
    while(1){
        //a?????????
        int MAX = 0, MIN = 0;
        vector<int> count(10, 0);
        vector<int> coun(10, 0);

        
        for(int i = 5; i >= 0; i--){
            //cout << a / (int)pow(10, i) << " ";
            count[a / powpow(10, i)]++;
            a = a % powpow(10, i);
        }

        for(int i = 0; i < 10; i++){
            coun[i] = count[i];
        }
        
        int j = 0;
        for(int i = 9; i > 0; i--){
            if(count[i] != 0){

                int temp = i*powpow(10, j);   //????????????
                MIN += temp;
                //cout << MIN << " " << temp << " " << powpow(10, j) << endl;
                //cout << i*pow(10, j) << endl;
                //cout << MIN << endl;
                j++;
                count[i]--;
                i++;
                //cout << (i+1)*pow(10, j+1) << endl;
                //cout << i+1 << " " << MIN << " " << j+1 << endl;
                continue;
            }
        }
        //cout << MIN << endl;
        //int input; cin >> input;
        j = L - 1;
        for(int i = 9; i >= 0; i--){
            if(coun[i] != 0){

                int temp = i*powpow(10, j);   //????????????
                MAX += temp;
                //cout << i << " " << j << " " << MAX << " " << temp << " " << powpow(10, j) << endl;
                //cout << i*pow(10, j) << endl;
                //cout << MIN << endl;
                j--;
                coun[i]--;
                i++;
                //cout << (i+1)*pow(10, j+1) << endl;
                //cout << i+1 << " " << MIN << " " << j+1 << endl;
                continue;
            }
        }

        //cout << MIN << " " << MAX << endl;
        a = MAX - MIN;
        array.push_back(a);

        //cout << MAX << " " << MIN << " " <<  a << endl;

        //????????????
        int flag = 0;
        for(int i = 0; i < array.size(); i++){
            for(int j = 0; j < i; j++){
                if(array[i] == array[j]){
                    cout << j << " " << array[i] << " " << i - j << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) break;
        
    }


    }
    return 0;
}