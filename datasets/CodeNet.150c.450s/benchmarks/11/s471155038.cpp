#include <iostream>
#include <array>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    array<array<bool, 13>, 4> have_card {false};
    const char suite[4] = {'S', 'H', 'C', 'D'};
    map<char, int> s2i = {{'S', 0}, {'H', 1}, {'C', 2}, {'D', 3}};

    for (int i=0; i!=n; ++i){
        char s;
        int number;
        cin >> s >> number;
        have_card[s2i[s]][number - 1] = true;
    }

    for (int s=0; s!=4; ++s){
        for (int num=0; num!=13; ++num){
            if (!have_card[s][num]){
                cout << suite[s] << ' ' << num + 1 << endl;
            }
        }
    }

    return 0;
}