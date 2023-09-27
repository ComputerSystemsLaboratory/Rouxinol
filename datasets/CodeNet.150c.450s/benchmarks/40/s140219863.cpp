#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dice {
public:
    int label1;
    int label2;
    int label3;
    int label4;
    int label5;
    int label6;

    Dice() {
        label1 = 0;
        label2 = 0;
        label3 = 0;
        label4 = 0;
        label5 = 0;
        label6 = 0;
    }

    void setValue(int n, int l) {
        switch (l) {
        case 1: label1 = n; break;
        case 2: label2 = n; break;
        case 3: label3 = n; break;
        case 4: label4 = n; break;
        case 5: label5 = n; break;
        case 6: label6 = n; break;
        default: break;
        }
    }

    void roll(char c) {
        int a = label1;
        switch (c) {
        case 'N':            
            label1 = label2;
            label2 = label6;
            label6 = label5;
            label5 = a;                
            break;
        case 'S':
            label1 = label5;
            label5 = label6;
            label6 = label2;
            label2 = a;
            break;
        case 'W':
            label1 = label3;
            label3 = label6;
            label6 = label4;
            label4 = a;
            break;
        case 'E':
            label1 = label4;
            label4 = label6;
            label6 = label3;
            label3 = a;
            break;
        default: 
            break;
        }
    }
};

int main()
{
    Dice DiceA;

    for (int i = 0; i < 6; i++) {
        int n = 0;
        cin >> n;
        DiceA.setValue(n, i + 1);
    }

    string str;
    cin >> str;
    if (str.empty()) return 1;
    int nSize = (int)str.size();
    for (int i = 0; i < nSize; i++) {
        char c = str[i];
        DiceA.roll(c);
    }

    cout << DiceA.label1 << endl;
}
