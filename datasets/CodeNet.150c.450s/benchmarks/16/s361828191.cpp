#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

struct item {
    int left;
    int area;
};

stack<int> leftNums;
stack<item> info;

int main()
{
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if ('\\' == input[i]) {
            leftNums.push(i);
        }
        else if (('/' == input[i]) && (!leftNums.empty())) {
            int currentLeft = leftNums.top();
            leftNums.pop();
            int currentArea = i - currentLeft;
            while ((!info.empty()) && (info.top().left > currentLeft)) {
                currentArea += info.top().area;
                info.pop();
            }
            item tempItem;
            tempItem.left = currentLeft;
            tempItem.area = currentArea;
            info.push(tempItem);
        }
    }

    int sum = 0;
    stack<int> output;
    while (!info.empty()) {
        item temp = info.top();
        info.pop();
        sum += temp.area;
        output.push(temp.area);
    }
    cout << sum << endl;
    cout << output.size();
    while (!output.empty()) {
        cout << " " << output.top();
        output.pop();
    }
    cout << endl;
    
    return 0;
}