#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

int to_num_from_mcxi(string inp);
string to_mcxi_from_num(int num);

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string x1, x2;
        int num1, num2;

        num1 = num2 = 0;
        cin >> x1 >> x2;

        num1 = to_num_from_mcxi(x1);
        num2 = to_num_from_mcxi(x2);

        num1 += num2;

        cout << to_mcxi_from_num(num1) << endl;
    }

    return 0;
}


int to_num_from_mcxi(string inp)
{
    int num = 0;
    map<char, int> mcxi;

    mcxi['m'] = 1000;
    mcxi['c'] = 100;
    mcxi['x'] = 10;
    mcxi['i'] = 1;

    for (int i = 0; i < inp.size(); i++) {
        if (isdigit(inp[i])) 
            num += (inp[i] - '0') * mcxi[inp[++i]];
        else
            num += mcxi[inp[i]];
    }

    return num;
}


string to_mcxi_from_num(int num)
{
    string output;
    int dig[] = {1000, 100, 10, 1};
    char mcxi[] = {'m', 'c', 'x', 'i'};

    for (int i = 0; i < 4; i++) {
        if (num / dig[i] == 0)
            continue;
        else if (num / dig[i] == 1)
            output += mcxi[i];
        else {
            output += (num / dig[i]) + '0';
            output += mcxi[i];
        }
        num %= dig[i];
    }

    return output;
}