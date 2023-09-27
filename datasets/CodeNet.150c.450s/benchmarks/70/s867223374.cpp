#include <iostream>

using namespace std;

int main(){
    string daystr[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int m, d;
    while(cin >> m >> d && m){
        for(int i = 0; i < m; i++){
            d += day[i];
        }
        cout <<  daystr[d % 7] << "\n";
    }
}
