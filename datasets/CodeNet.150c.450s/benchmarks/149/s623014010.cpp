//
//  main.cpp
//  union_find_tree
//
//  Created by ???????????? on 2017/11/11.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

class DisjointSet{
public:
    vector<int> parent, rank;
    
    DisjointSet(int num){
        for(int i = 0; i < num; i ++){
            parent.push_back(i);
            rank.push_back(1);
        }
    }
    
    void unite(int temp1, int temp2){
        int rank1 = rank[temp1];
        int rank2 = rank[temp2];
        int newRank = rank1 + rank2;
        int rank1Parent = parent[temp1];
        int rank2Parent = parent[temp2];
        if(rank1 > rank2){
            update(rank2Parent, rank1Parent, newRank);
        }
        else{
            update(rank1Parent, rank2Parent, newRank);
        }
    }
    
    // update from dummy's parent to target's parent
    void update(int dummy, int target, int newRank){
        for (int i = 0; i < parent.size(); i++){
            if(parent[i] == dummy || parent[i] == target){
                rank[i] = newRank;
                if(parent[i] == dummy){
                    parent[i] = target;
                }
            }
        }
    }
    
    void findSet(int temp1, int temp2){
        int p1 = parent[temp1];
        int p2 = parent[temp2];
        
        if (p1 == p2){cout <<1<<endl;}
        else {cout <<0 << endl;}
    }
};

int main(int argc, const char * argv[]) {
    int num, num_com, command, temp1, temp2;
    
    scanf("%d %d", &num, &num_com);
    DisjointSet ds = DisjointSet(num);
    for (int i = 0; i < num_com; i++){
        scanf("%d %d %d", &command, &temp1, &temp2);
        if(command == 0){
            ds.unite(temp1, temp2);
        }
        else if(command == 1){
            ds.findSet(temp1, temp2);
        }
    }

//    std::cout << "Hello, World!\n";
    return 0;
}