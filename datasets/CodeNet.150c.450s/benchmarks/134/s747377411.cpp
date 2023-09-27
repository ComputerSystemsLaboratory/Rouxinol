#include <cstdio>
#include <vector>

class Node {
    public:
        int id;
        int left_id;
        int right_id;
        int parent_id;
        Node();
};

Node::Node()
{
    id = -1;
    left_id = -1;
    right_id = -1;
    parent_id = -1;
}

int search_root(std::vector<Node>& data, int id)
{
    if(data[id].parent_id == -1) {
        return id;
    } else {
        return search_root(data, data[id].parent_id);
    }
}

void walk_preorder(std::vector<Node>& data, int id)
{
    printf(" %d", id);
    if(data[id].left_id != -1) {
        walk_preorder(data, data[id].left_id);
    }
    if(data[id].right_id != -1) {
        walk_preorder(data, data[id].right_id);
    }
}

void walk_inorder(std::vector<Node>& data, int id)
{
    if(data[id].left_id != -1) {
        walk_inorder(data, data[id].left_id);
    }
    printf(" %d", id);
    if(data[id].right_id != -1) {
        walk_inorder(data, data[id].right_id);
    }
}

void walk_postorder(std::vector<Node>& data, int id)
{
    if(data[id].left_id != -1) {
        walk_postorder(data, data[id].left_id);
    }
    if(data[id].right_id != -1) {
        walk_postorder(data, data[id].right_id);
    }
    printf(" %d", id);
}

int main()
{
    int input_size;
    scanf("%d", &input_size);
    std::vector<Node> data(input_size);
    for(int i = 0; i < data.size(); i++) {
        int id, left, right;
        scanf("%d %d %d", &id, &left, &right);
        data[id].id = id;
        if(left != -1) {
            data[id].left_id = left;
            data[left].parent_id = id;
        }
        if(right != -1) {
            data[id].right_id = right;
            data[right].parent_id = id;
        }
    }

    int root_id = search_root(data, 0);

    puts("Preorder");
    walk_preorder(data, root_id);
    putchar('\n');

    puts("Inorder");
    walk_inorder(data, root_id);
    putchar('\n');

    puts("Postorder");
    walk_postorder(data, root_id);
    putchar('\n');

    return 0;
}