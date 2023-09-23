#include <iostream>
using namespace std;

int main()
{
    int output_num[255];
    int output_id = 0;

    while(1) {
        int a, b;
        char op;
        cin >> a >> op >> b;

        if(op == '+') {
            output_num[output_id] = a+b;
            output_id++;
        } else if(op == '-') {
            output_num[output_id] = a-b;
            output_id++;
        } else if(op == '*') {
            output_num[output_id] = a*b;
            output_id++;
        } else if(op == '/') {
            output_num[output_id] = a/b;
            output_id++;
        } else {
            break;
        }
    }

    for(int oi = 0; oi < output_id; oi++) cout << output_num[oi] << endl;

    return 0;
}