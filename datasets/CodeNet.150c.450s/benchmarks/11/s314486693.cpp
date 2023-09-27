#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    map<string,int> cards;
    string suit[] = {"S","H","C","D"};

    cin >> n;cin.ignore();

    for(int i=0;i<n;i++) {
        string str;
        getline(cin,str);
        cards[str] = 1;
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<13;j++)
        {
            string str = suit[i] + " " + to_string(j+1);
            if(cards[str] == 0)
                cout << str << endl;
        }
    }

    return 0;
}