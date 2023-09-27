#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int days;
    cin >> days;

    int penalties[26];

    for(int i = 0; i < 26; i++){
        int p;
        cin >> p;
        penalties[i] = p;
    }

    vector<int*> satis;

    for(int i = 0; i < days; i++){
        int *sat = new int[26];
        for(int j = 0; j < 26; j++){
            int s;
            cin >> s;
            sat[j] = s;
        }
        satis.push_back(sat);
    }

    int last[26];

    for(int i = 0; i < 26; i++){
        last[i] = -1;
    }

    int satis_sum = 0;
    for(int i = 0; i < days; i++){
        int cont;
        cin >> cont;
        cont -= 1;
        last[cont] = i;
        
        satis_sum += satis[i][cont];

        for(int j = 0; j < 26; j++){
            satis_sum -= penalties[j] * (i - last[j]);
        }
        cout << satis_sum << endl;
    }


    return 0;
}