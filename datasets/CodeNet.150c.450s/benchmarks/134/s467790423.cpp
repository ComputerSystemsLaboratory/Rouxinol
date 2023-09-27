#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

std::vector<int> v[26];
std::vector<int> preorder;
std::vector<int> inorder;
std::vector<int> postorder;

struct Sibling
{
    int left, right;
};
Sibling sibling[26];
void dfs(const int index, const int parent_index)
{
    /*
    if(parent_index != -1){
        std::vector<int>::iterator itr = std::find(v[index].begin(), v[index].end(), parent_index);
        v[index].erase(itr);
    }
    */
    preorder.push_back(index);
    if(sibling[index].left == -1 && sibling[index].right == -1){
        inorder.push_back(index);
        postorder.push_back(index);
        return;
    }
    if(sibling[index].left != -1){
        dfs(sibling[index].left, index);
    }
    inorder.push_back(index);
    if(sibling[index].right != -1){
        dfs(sibling[index].right, index);
    }
    postorder.push_back(index);
}

int main()
{
    int n;
    cin >> n;
    std::vector<int> childlist;
    for(int i=0; i<n; i++){
        int id, left, right;
        cin >> id >> left >> right;
        if(left != -1){
            //v[id].push_back(left);
            //v[left].push_back(id);
            childlist.push_back(left);  // root検索用
        }
        if(right != -1){
            //v[id].push_back(right);
            //v[right].push_back(id);
            childlist.push_back(right);  // root検索用
        }
        Sibling s;
        s.left = left; s.right = right;
        sibling[id] = s;
    }
    int root = -1;
    for(int i=0; i<n; i++){
        std::vector<int>::iterator itr;
        itr = std::find(childlist.begin(), childlist.end(), i);
        if(itr == childlist.end()){
            root = i;
        }
    }
    if(root == -1) cout << "root not found." << endl;
    dfs(root, -1);
    
    cout << "Preorder" << endl;
    std::vector<int>::iterator itr = preorder.begin();
    while(itr != preorder.end()){
        cout << " " << *itr; ++itr;
    }
    cout << endl;
    
    cout << "Inorder" << endl;
    itr = inorder.begin();
    while(itr != inorder.end()){
        cout << " " << *itr; ++itr;
    }
    cout << endl;
    
    cout << "Postorder" << endl;
    itr = postorder.begin();
    while(itr != postorder.end()){
        cout << " " << *itr; ++itr;
    }
    cout << endl;
}

