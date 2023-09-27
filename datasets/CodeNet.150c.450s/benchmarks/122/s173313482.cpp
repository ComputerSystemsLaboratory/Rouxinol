#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main(){
    string command;

    priority_queue<int> queue;

    while(true){
        cin >> command;
        if(command == "end")
            break;
        else if(command == "insert"){
            int argument;
            cin >> argument;
            queue.push(argument);
        }else if(command == "extract"){
            cout << queue.top() << endl;
            queue.pop();
        }
    }

    return 0;
}