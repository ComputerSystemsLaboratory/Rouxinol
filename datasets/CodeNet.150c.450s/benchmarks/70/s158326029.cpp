
//Nayeem Shahriar Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.

 #include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;


   int main(){
    int m, d, w;
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string weekName[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday"};
    while(1){
        cin >> m >> d;
        if(!(m || d)){
            return 0;
        }
        w = 3;
        for(int i = 1; i < m; i++){
            w += days[i - 1];
        }
        w += d;
        cout << weekName[w % 7] << endl;
    }
}