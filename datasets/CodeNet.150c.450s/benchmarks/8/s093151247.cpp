#include<iostream>

using namespace std;
int main(){
    string str, str2;
    int n;
    int play1 = 0;
    int play2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> str >> str2;
        if (str > str2) {
            play1 += 3;
        } else if (str < str2) {
            play2 += 3;
        } else {
            play1 += 1;
            play2 +=1;
        }
    }
    cout << play1 << " " << play2 << endl;
}
