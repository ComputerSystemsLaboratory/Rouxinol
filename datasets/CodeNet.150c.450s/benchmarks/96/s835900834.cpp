#include<bits/stdc++.h>
using namespace std;

int main(void){

    vector<vector<char> > number(10);
    number[1].push_back('.');
    number[1].push_back(',');
    number[1].push_back('!');
    number[1].push_back('?');
    number[1].push_back(' ');

    number[2].push_back('a');
    number[2].push_back('b');
    number[2].push_back('c');

    number[3].push_back('d');
    number[3].push_back('e');
    number[3].push_back('f');

    number[4].push_back('g');
    number[4].push_back('h');
    number[4].push_back('i');

    number[5].push_back('j');
    number[5].push_back('k');
    number[5].push_back('l');

    number[6].push_back('m');
    number[6].push_back('n');
    number[6].push_back('o');

    number[7].push_back('p');
    number[7].push_back('q');
    number[7].push_back('r');
    number[7].push_back('s');

    number[8].push_back('t');
    number[8].push_back('u');
    number[8].push_back('v');

    number[9].push_back('w');
    number[9].push_back('x');
    number[9].push_back('y');
    number[9].push_back('z');    

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        int j = 0;
        while(str[j] != '\0'){
            int counter = 0;
            if(str[j] == '0'){ 
                j++;
                continue;
            }
            while(str[j] != '0'){
                counter++;
                j++;
            }
            //cout << j - 1 << endl;
            //cout << str[j - 1] << endl;
            //int a = str[j - 1];
            //cout << counter << endl;
            //cout << a << endl;
            //cout << number[ a ].size() << endl;
            //cout << number[2].size() << endl;
            //cout << counter / number[j - 1].size() << endl;
            //cout << counter << " " << str[j - 1] << endl;
            cout << number[(int)str[j - 1] - '0'][(counter-1) % number[(int)str[j - 1] - '0'].size()];
            j++;
        }

        cout << endl;
    }

    return 0;
}