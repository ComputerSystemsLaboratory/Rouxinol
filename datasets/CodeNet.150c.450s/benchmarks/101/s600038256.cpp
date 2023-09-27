#include <iostream>
#include <vector>
#include <stack>

using namespace std;
using Relations = vector<vector<int>>;

const int no_group = -1;
const int no_user_id = -1;

void depth_first_search(Relations& list_graph, int started_user_id, vector<int>& connected_group, int group_id) {
  stack<int> visited_path;
  visited_path.push(started_user_id);
  connected_group[started_user_id] = group_id;

  while(!visited_path.empty()) {
    int current_user_id = visited_path.top();

    int unvisited_adjacency_user_id = no_user_id;
    for(int i = 0; i < list_graph[current_user_id].size(); i++) {
      int adjacency_user_id = list_graph[current_user_id][i];
      if(connected_group[adjacency_user_id] == no_group) {
        unvisited_adjacency_user_id = adjacency_user_id;
        break;
      }
    }

    if(unvisited_adjacency_user_id != no_user_id) {
      connected_group[unvisited_adjacency_user_id] = group_id;
      visited_path.push(unvisited_adjacency_user_id);
    } else {
      visited_path.pop();
    }
  }
}


int main() {
  int user_num;
  int relation_num;
  Relations list_graph;

  // Init
  cin >> user_num >> relation_num;
  list_graph.resize(user_num);

  // Construct list graph
  for(int i = 0; i < relation_num; i++) {
    int user1_id, user2_id;
    cin >> user1_id >> user2_id;
    list_graph[user1_id].push_back(user2_id);
    list_graph[user2_id].push_back(user1_id);
  }

  // Group connected component
  vector<int> connected_group(user_num, no_group);

  int group_id = 0;
  for(int i =  0; i < user_num; i++) {
    if(connected_group[i] == no_group) {
      depth_first_search(list_graph, i, connected_group, group_id++);
    }
  }


  // Answer queries
  int query_num;
  cin >> query_num;
  for(int i = 0; i < query_num; i++) {
    int user1_id, user2_id;
    cin >> user1_id >> user2_id;

    if(connected_group[user1_id] == connected_group[user2_id]) {
      cout << "yes";
    } else {
      cout << "no";
    }
    cout << endl;
  }
}

