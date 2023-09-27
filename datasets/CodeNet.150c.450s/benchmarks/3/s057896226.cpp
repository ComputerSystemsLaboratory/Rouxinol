#include<iostream>
using namespace std;
#include<string>

int main()
{
    string str, order, w;
    int q, i, j, a, b;

    cin >> str;
    cin >> q;

    for(i = 0; i < q; i++){
        cin >> order;
        cin >> a >> b;

        if(order == "print"){
            cout << str.substr(a, b - a + 1) << endl;

        }else if(order == "reverse"){
            w = str.substr(a, b - a + 1);
            for(j = 0; j < b - a + 1; j++){
                str[a + j] = w[b - a - j];
            }

        }else{
            cin >> w;
            for(j = 0; str[j]; j++);
            str = str.substr(0, a) + w + str.substr(b + 1, j - b - 1);
        }
    }

    return 0;
}