#include<iostream>
using namespace std;

typedef struct box{ int val; box* next; } box_t;

box_t* init()   // initialize.
{
    box_t* head = new box_t;
    head->val = -1;
    head->next = NULL;
    return head;
}

box_t* push(box_t* head, int data)
{
    box_t* box = new box_t;
    box->val = data;
    box->next = head->next;
    head->next = box;
    return box;
}

int pop(box_t* head)
{
    box_t* box = head->next;
    int val;
    if(box == NULL){
        return 0;
    }else{
        head->next = box->next;
        val = box->val;
        delete box;
    }
    return val;
}

bool isEmpty(box_t* head){ return (head->next == NULL ? true : false); }

int front(box_t* head)
{
    if(head->next == NULL) return -1;
    return head->next->val;
}

int volume(box_t* head)
{
    int v = 0;
    box_t*box = head->next;
    while(box){ box = box->next; v++; }
    return v;
}

void reduce(box_t* head)
{
    int val1, val2;
    val1 = pop(head);
    val2 = pop(head);
    push(head, val1 + val2);
    return;
}

void show_all(box_t* head)
{
    box_t* box = head->next;
    while(box){
        cout << box->val;
        box = box->next;
        if(box) cout << " ";
    }
    cout << endl;
}

int main()
{
    char data[20000], ch;
    box_t* b1 = init();
    box_t* ponds = init();
    box_t* b2 = init();
    int i = 0, left, Area = 0, end = 0;

    cin >> data;
    while(data[end]){ end++; };

    while(data[end - i - 1]){
        ch = data[end - i - 1];
        if(ch == '/'){
            push(b1, i); push(b2, i);
        }else if(ch == '\\'){
            if(isEmpty(b1)){ i++; continue; }
            left = pop(b1);
            Area = Area + i - left;
            push(ponds, i - left);
            while(front(b2) > left){
                pop(b2);
                reduce(ponds);
            };
        }else{}
        i++;
    };
    cout << Area << endl;
    cout << volume(ponds);
    if(!isEmpty(ponds)){
        cout << " "; show_all(ponds); 
    }else{
        cout << endl;
    }
    return 0;
}