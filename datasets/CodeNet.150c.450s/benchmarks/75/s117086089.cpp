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
        printf(" %d", list[i]);
    }
    printf("\n");
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// logic
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int LeftIndex(const vector<int> &list, int index){
    if (list.size() - 1 < index * 2) return 0;
    return index * 2;
}
int RightIndex(const vector<int>&list, int index){
    if (list.size() - 1 < index * 2 + 1) return 0;
    return index * 2 + 1;
}

void MaxHeapfy(vector<int>& list, int index){
    int left = LeftIndex(list, index);
    int right = RightIndex(list, index);
    int largestIndex = index;
    if (list[largestIndex] < list[left]){
        largestIndex = left;
    }
    if (list[largestIndex] < list[right]){
        largestIndex = right;
    }
    if (largestIndex != index) {
        std::swap(list[index], list[largestIndex]);
        MaxHeapfy(list, largestIndex);
    }
}
void BuildMaxHeap(vector<int>& list){
    for (int i = list.size() / 2; 0 < i; i--){
        MaxHeapfy(list, i);
    }
}

void solve() {
    // CompleteBinaryTree
    int n;
    scanf("%d", &n);
    vector<int> tree(n+1);
    tree[0] = std::numeric_limits<int>::min();
    for(int i = 1; i <= n; i++){
        int v;
        scanf("%d", &v);
        tree[i] = v;
    }
    BuildMaxHeap(tree);
    for (int i = 1; i < tree.size(); i++){
        printf(" %d", tree[i]);
    }
    printf("\n");
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// main
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    solve();
    return 0;
}
