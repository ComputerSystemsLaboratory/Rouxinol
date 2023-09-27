#include <cstdio>
#include <string>
#include <list>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    list<int> l;
    while(n--){
        char cmdChar[64];
        scanf("%s", cmdChar);
        string command(cmdChar);
        if(command == "deleteFirst"){
            l.pop_front();
        }else if(command == "deleteLast"){
            l.pop_back();
        }else{
            int i;
            scanf("%d", &i);
            if(command == "insert"){
                l.push_front(i);
            }else if(command == "delete"){
                list<int>::iterator it = l.begin();
                while(it != l.end()){
                    if(i == *it){
                        l.erase(it);
                        break;
                    }
                    it++;
                }
            }
        }
    }
    list<int>::iterator it = l.begin();
    while(it != l.end()){
        printf("%d", *it);
        it++;
        printf("%c", it == l.end() ? '\n' : ' ');
    }
    return 0;
}