#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
        int face[6];

        void rotate(string str);
};

void Dice::rotate(string str)
{
        int tmp;

        for (size_t i = 0; i < str.length(); i++) {
                tmp = face[0];
                switch (str[i]) {
                case 'N':
                        face[0] = face[1];
                        face[1] = face[5];
                        face[5] = face[4];
                        face[4] = tmp;
                        break;
                case 'S':
                        face[0] = face[4];
                        face[4] = face[5];
                        face[5] = face[1];
                        face[1] = tmp;
                        break;
                case 'W':
                        face[0] = face[2];
                        face[2] = face[5];
                        face[5] = face[3];
                        face[3] = tmp;
                        break;
                default:
                        face[0] = face[3];
                        face[3] = face[5];
                        face[5] = face[2];
                        face[2] = tmp;
                        break;
                }
        }
}

int main()
{
        Dice dice;

        for (int i = 0; i < 6; i++) {
                cin >> dice.face[i];
        }
        string com;
        cin >> com;
        dice.rotate(com);
        cout << dice.face[0] << endl;

        return 0;
}