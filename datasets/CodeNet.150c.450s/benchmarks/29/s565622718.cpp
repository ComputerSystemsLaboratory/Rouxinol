#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
#include <memory>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;

int n;
list<long long int> linked_list;
void docommand(string command);
void print();

int main(){
    //freopen("/Users/mac/Desktop/C++?¨????/test/test.txt", "r", stdin);
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        char command[20];
        scanf("%s",command);
        docommand(command);
    }
    print();
    return 0;
}

void docommand(string command)
{
    if (command=="insert") {
        long long int n;
        scanf("%lld",&n);
        linked_list.push_front(n);
    }
    if (command=="delete") {
        long long int n;
        scanf("%lld",&n);
        list<long long int>::iterator findit=std::find(linked_list.begin(), linked_list.end(), n);
        if (*findit==n) {
            linked_list.erase(findit);
        }
    }
    if (command=="deleteFirst") {
        linked_list.pop_front();
    }
    if (command=="deleteLast") {
        linked_list.pop_back();
    }
}
void print()
{
    for (list<long long int>::iterator it=linked_list.begin(); it!=linked_list.end(); it++) {
        if (it!=linked_list.begin()) {
            printf(" ");
        }
        printf("%lld",*it);
    }
    printf("\n");
}