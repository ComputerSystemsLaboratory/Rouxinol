#include<iostream>
using namespace std;
#include<cstdlib>
#include<string>
#include<sstream>

string IntToString(int number)
{
    stringstream ss;
    ss << number;
    return ss.str();
}

int main()
{
    string s[101];
    int top = 0, a, b;
    while(cin >> s[top]){
		if(s[top][0] >= '0'){ top++; continue;
        }else{
            a = atoi(s[top - 2].c_str());
            b = atoi(s[top - 1].c_str());
            if(s[top] == "+") s[top - 2] = IntToString(a + b);
            if(s[top] == "*") s[top - 2] = IntToString(a * b);
            if(s[top] == "-") s[top - 2] = IntToString(a - b);
            top--;
        }
    };
    cout << s[top - 1] << endl;

    return 0;
}