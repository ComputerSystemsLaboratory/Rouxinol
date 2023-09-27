#include <stdio.h>
#include <vector>
#include <list>
#include <map>
#include <array>
#include <memory>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stdexcept>
#include <numeric>
#include <queue>

using std::string;
using std::vector;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// util
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

std::vector<std::string> split(const std::string& input, char delimiter)
{
    std::istringstream stream(input);

    std::string field;
    std::vector<std::string> result;
    while (std::getline(stream, field, delimiter)) {
        result.push_back(field);
    }
    return result;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// user func
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void printList(const vector<int>& list) {
    // print
    for(int i = 0; i < list.size(); i++){
        printf("%d", list[i]);
        if ( i + 1 != list.size() ) {
            printf(" ");
        }
    }
    printf("\n");
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// logic
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Node{
public:
    Node(int id) : id(id) 
    {
        // constructer
    }
    void AddFriend(int id){
        this->friends.push_back(id);
    }
    vector<int> Friends() {
        return this->friends;
    }

    int id;
    // bool done = false;
    int clazz = -1;
    vector<int> friends;
};

class List{
public:
    List(int numNode)
    {
        // constructer
        for (int i = 0; i < numNode; i++) {
            this->nodes.insert(std::make_pair(i, Node(i)));
        }
    }
    void SetRelation(int lhs, int rhs)
    {
        this->nodes.at(lhs).AddFriend(rhs);
        this->nodes.at(rhs).AddFriend(lhs);
    }
    int clazz = 1;
    void Traverse(){
        for(int i = 0; i < this->nodes.size(); i++) {
            this->_traverse(i);
            clazz++;
        }
    }
    void _traverse(int id){
        // printf("id %d'%c'\n", id, this->nodes.at(id).clazz);
        if (0 <= this->nodes.at(id).clazz) {
            return;
        }
        this->nodes.at(id).clazz = this->clazz;
        for (auto i : this->nodes.at(id).Friends()) {
            _traverse(i);
        }
    }
    bool Find(int from, int to)
    {
        // printf("find %d - %d\n", from, to);
        // printf("    '%d' : '%d'\n", this->nodes.at(from).clazz, this->nodes.at(to).clazz);
        if(this->nodes.at(from).clazz == -1 || this->nodes.at(to).clazz == -1) return false;
        return this->nodes.at(from).clazz == this->nodes.at(to).clazz;
    }
    // bool _find(int id){
    //     while(!this->queue.empty()){
    //         int i = queue.front();
    //         queue.pop();
    //         if (this->nodes.at(i).done) continue;
    //         for (auto relId : this->nodes.at(i).Friends()) {
    //             if (relId == id) {
    //                 return true;
    //             } else {
    //                 queue.push(relId);
    //             }
    //         }
    //         this->nodes.at(i).done = true;
    //     }
    //     return false;
    // }
    void Print() {
        for (int i = 1; i < nodes.size(); i++) {
            printf("%d %c\n", i, nodes.at(i).clazz);
        }
    }
private:
    std::unordered_map<int, Node> nodes;
    std::queue<int> queue;
};

void solve() {

    int n;
    scanf("%d", &n);
    List list(n);

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int lhs, rhs;
        scanf("%d %d", &lhs, &rhs);
        list.SetRelation(lhs, rhs);
    }
    list.Traverse();
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        int from, to;
        scanf("%d %d", &from, &to);
        if (list.Find(from, to)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// main
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    solve();
    return 0;
}
