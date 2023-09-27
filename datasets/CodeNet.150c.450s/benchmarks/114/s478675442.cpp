// ALDS1_12_A: Minimum Spanning Sort
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
bool debug = false;
const int INF = 100000;
// const int BK = 0, GR = 1, WT = 2;

std::vector<std::vector<int>> adjacency_list;
std::vector<int> node_stats;
std::vector<std::pair<int, int>> weight_memo;

int PrimAlgorithm(int weight, int vertex) {
    node_stats.at(vertex) = 1;
    
    for (int i=0; i<adjacency_list.at(vertex).size(); i++) {
        int tmp_vertex = i;
        if (adjacency_list.at(vertex).at(tmp_vertex) != -1) {
            std::pair<int,int> tmp = std::make_pair(tmp_vertex, adjacency_list.at(vertex).at(tmp_vertex));
            weight_memo.push_back(tmp);
        }
    }
    
    int minimum_weight = INF, next_vertex = -1;
    for (int i=0; i<weight_memo.size(); i++) {
        int tmp_vertex = weight_memo.at(i).first, tmp_weight = weight_memo.at(i).second + weight;
        if (tmp_weight < minimum_weight) {    
            if (node_stats.at(tmp_vertex) == 0) {
                next_vertex = tmp_vertex;
                minimum_weight = tmp_weight;
            }
        }
    }
    if (debug) std::cout << "next_vertex = " << next_vertex << ", minimum_weight = " << minimum_weight << "\n";
    if (next_vertex == -1) {
        return weight;
    }
    return PrimAlgorithm(minimum_weight, next_vertex);
}

int main() {
    int total_num; std::cin >> total_num;
    adjacency_list.resize(total_num);
    for (int i=0; i<adjacency_list.size(); i++) adjacency_list.at(i).resize(total_num);
    for (int i=0; i<total_num; i++) {
        for(int j=0; j<total_num; j++) {
            std::cin >> adjacency_list.at(i).at(j);
        }
    }

    node_stats.resize(total_num);
    for (int i=0; i<node_stats.size(); i++) node_stats.at(i) = 0;

    int result = PrimAlgorithm(0, 0);
    std::cout << result << "\n";
}
