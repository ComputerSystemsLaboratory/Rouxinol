#include<stdio.h>
#include<string.h>

class list
{
    int L[1000001];
    int head, tail, MAX;
public:
    list();
    void initialize();
    void ins(int);
    void del(int);
    void del_first();
    void del_last();
    void show();
};

list::list() : MAX(1000001){}

void list::initialize(){ head = tail = 0; }

void list::ins(int key)
{
    L[head] = key;
    head++;
    if(head == MAX) head = 0;
    return;
}

void list::del(int key)
{
    int i = head, j;
    do{
        if(i == 0) i = MAX;
        i--;
        if(i == tail && L[tail] != key) return;
    }while(L[i] != key);
    // ????????£???????????§L[i]????????????key. ???????????°??????????????????
    j = i;
    do{
        if(j == MAX - 1){
            L[j] = L[0];
        }else{ L[j] = L[j + 1]; }
        j++;
        if(j == MAX) j = 0;
    }while(j != head);
    // ?????????head???1???????????????
    head--;
    if(head < 0) head = MAX - 1;
	return;
}

void list::del_first()
{
    head--;
    if(head < 0) head = MAX - 1;
    return;
}

void list::del_last()
{
    tail++;
    if(tail == MAX) tail = 0;
    return;
}

void list::show()
{
    int i = head;

    while(i != tail){
        if(i == 0) i = MAX;
        printf("%d", L[i - 1]);
        i--;
        if(i != tail) printf(" ");
    }
    printf("\n");
    return;
}

int main()
{
    list l = list();
    char order[13];
    int i, n, key;
    l.initialize();

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", &order);
        if(order[0] == 'i'){
            scanf("%d", &key);
            l.ins(key);
        }else if(!order[6]){
            scanf("%d", &key);
            l.del(key);
        }else{
            if(order[6] == 'F') l.del_first();
            if(order[6] == 'L') l.del_last();
        }
    }
    l.show();

    return 0;
}