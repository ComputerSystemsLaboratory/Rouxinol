#include <iostream>
#include <vector>

class Node{
public:
    long key;
    int parent, left, right;
    Node(){
        key = -1;
        parent = left = right = -1;
    }
};

class CompleteBT{
public:
    int size;
    std::vector<long> heap;
    std::vector<Node> nodes;
    CompleteBT(int s, std::vector<long> inHeap){
        heap = inHeap;
        size = s;
        Node n;
        nodes.assign(size, n);
    }
    void makeTree(){
        for (int i = 0; i < size; i++){
            nodes[i].key = heap[i];
            if (i > 0){
                nodes[i].parent = (i - 1) / 2;
            }
            if ((i + 1) * 2 - 1 < size){
                nodes[i].left = (i + 1) * 2 - 1;
            }
            if ((i + 1) * 2 < size){
                nodes[i].right = (i + 1) * 2;
            }
        }
    }
};

int main(){
    int size;
    std::cin >> size;
    std::vector<long> heap(size);
    for (int i = 0; i < size; i++){
        std::cin >> heap[i];
    }
    
    CompleteBT tree(size, heap);
    tree.makeTree();
    
    for (int i = 0; i < size; i++){
        std::cout << "node " << i+1 << ": key = " << tree.nodes[i].key << ", ";
        if (tree.nodes[i].parent >= 0){
            std::cout << "parent key = " << tree.nodes[tree.nodes[i].parent].key << ", ";
        }
        if (tree.nodes[i].left >= 0){
            std::cout << "left key = " << tree.nodes[tree.nodes[i].left].key << ", ";
        }
        if (tree.nodes[i].right >= 0){
            std::cout << "right key = " << tree.nodes[tree.nodes[i].right].key << ", ";
        }
        std::cout << std::endl;
    }
    
}
