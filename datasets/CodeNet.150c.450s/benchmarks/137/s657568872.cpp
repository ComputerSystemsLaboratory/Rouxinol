#include <string>
#include <iostream>
#include <utility>

template<typename T>
struct Node
{
    T value;
    Node* left;
    Node* right;
    Node()
    {
        left = right = NULL;
    }
};

template<typename T>
class MySet
{
    Node<T>* root_;
    std::pair<Node<T>*, bool> insert(const T& value, Node<T>* node)
    {
        if(node->value == value){
            return std::make_pair(node, false);
        }
        Node<T>*& p = node->value < value ? node->right : node->left;
        if(p) return insert(value, p);
        p = new Node<T>;
        p->value = value;
        return std::make_pair(p, true);
    }
    Node<T>* find(const T& value, Node<T>* node)
    {
        if(node->value == value){
            return node;
        }
        Node<T>* p = node->value < value ? node->right : node->left;
        if(p) return find(value, p);
        return NULL;
    }
    void delete_node(Node<T>* node)
    {
        if(node == NULL) return;
        delete_node(node->left);
        delete_node(node->right);
        delete node;
    }
public:
    MySet() : root_(NULL){}
    ~MySet()
    {
        delete_node(root_);
    }
    std::pair<Node<T>*, bool> insert(const T& value)
    {
        if(root_) return insert(value, root_);
        root_ = new Node<T>;
        root_->value = value;
        return std::make_pair(root_, true);
    }
    Node<T>* find(const T& value)
    {
        if(root_) return find(value, root_);
        return NULL;
    }
    Node<T>* end()
    {
        return NULL;
    }
};


int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    // std::set<std::string> dic;
    MySet<std::string> dic;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::string command, str;
        std::cin >> command >> str;
        if(command == "insert"){
            dic.insert(str);
        }else
        if(command == "find"){
            std::cout << (dic.find(str) != dic.end() ? "yes" : "no") << std::endl;
        }
    }
    return 0;
 }