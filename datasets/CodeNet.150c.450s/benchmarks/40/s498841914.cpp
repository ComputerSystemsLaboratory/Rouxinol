#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
        string s, tmp, str, commands;
        stringstream ss;
        vector<string> dice;

        getline(cin, s);

        ss << s;

        while(getline(ss, str, ' ')) {
                dice.push_back(str);
        }

        cin >> commands;

        for(int i = 0; i < commands.length(); i++) {
                switch(commands[i]) {
                        case 'N':
                                tmp = dice[0];
                                dice[0] = dice[1];
                                dice[1] = dice[5];
                                dice[5] = dice[4];
                                dice[4] = tmp;
                                break;
                        case 'E':
                                tmp = dice[0];
                                dice[0] = dice[3];
                                dice[3] = dice[5];
                                dice[5] = dice[2];
                                dice[2] = tmp;
                                break;
                        case 'W':
                                tmp = dice[0];
                                dice[0] = dice[2];
                                dice[2] = dice[5];
                                dice[5] = dice[3];
                                dice[3] = tmp;
                                break;
                        case 'S':
                                tmp = dice[0];
                                dice[0] = dice[4];
                                dice[4] = dice[5];
                                dice[5] = dice[1];
                                dice[1] = tmp;
                                break;
                        default :
                                break;
                }
        }

        cout << dice[0] << endl;

        return 0;
}
