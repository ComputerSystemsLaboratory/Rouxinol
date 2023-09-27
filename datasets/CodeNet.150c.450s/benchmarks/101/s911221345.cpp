/* ALDS1_11_D: Connected Components */

#include <iostream>
#include <vector>
#include <stack>
using std::vector;
using std::stack;

void grouping(int id, int group_id, int group_ids[], vector<int> sns[]) {
    stack<int> S;
    S.push(id);
    group_ids[id] = group_id;

    while(! S.empty()) {
        id = S.top();
        S.pop();
        vector<int> friends = sns[id];
        for (int i = 0; i < friends.size(); i++) {
            int friend_id = friends[i];
            if (group_ids[friend_id] < 0) {
                group_ids[friend_id] = group_id;
                S.push(friend_id);
            }
        }
    }
}

void assign_groups(int n_users, vector<int> sns[], int group_ids[]) {
    int group_id = 0;
    std::fill_n(group_ids, n_users, -1);
    for (int id = 0; id < n_users; id++) {
        if (group_ids[id] < 0) {
            grouping(id, group_id, group_ids, sns);
            group_id++;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);

    int n_users, n_relations;
    std::cin >> n_users >> n_relations;

    int id, friend_id, n_friends;
    vector<int> *sns = new vector<int>[n_users];
    for (int i = 0; i < n_relations; i++) {
        std::cin >> id >> friend_id;
        sns[id].push_back(friend_id);
        sns[friend_id].push_back(id);
    }

    int group_ids[n_users];
    assign_groups(n_users, sns, group_ids);

    int n_questions;
    std::cin >> n_questions;

    for (int i = 0; i < n_questions; i++) {
        std::cin >> id >> friend_id;
        bool same_group = group_ids[id] == group_ids[friend_id];
        std::cout << ( same_group ? "yes" : "no" ) << "\n";
    }
    return 0;
}