
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
        int b = label2;
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
        case 'R':
            label2 = label3;
            label3 = label5;
            label5 = label4;
            label4 = b;
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

    // Ver.1
    //string str;
    //cin >> str;
    //if (str.empty()) return 1;
    //int nSize = (int)str.size();
    //for (int i = 0; i < nSize; i++) {
    //    char c = str[i];
    //    DiceA.roll(c);
    //}

    //cout << DiceA.label1 << endl;

    // Ver.2
    int Q; 
    cin >> Q;
    if (Q<1||Q>24) return 1;

    for (int i = 0; i < Q; i++) {
        int q1{ 0 }, q2{ 0 };
        cin >> q1 >> q2;

        if (DiceA.label3 == q1) DiceA.roll('W');
        if (DiceA.label4 == q1) DiceA.roll('E');
        while (DiceA.label1!=q1) {
            DiceA.roll('N');
        }
        while (DiceA.label2 != q2) {
            DiceA.roll('R');
        }
        cout << DiceA.label3 << endl;
    }
}
