// 2015/05/26 Tazoe
 
#include <iostream>
using namespace std;
 
// Nodeクラス
class Node{
public:
    Node* prev; // 前のノードへのポインタ
    Node* next; // 次のノードへのポインタ
    int data;   // データ
    Node(){prev = 0; next = 0; data = 0;}       // デフォルトコンストラクタ
};
 
// Listクラス
class List{
private:
    Node head;  // ヘッドノード（ダミー）
public:
    List(){head.prev = &head; head.next = &head;}   // デフォルトコンストラクタ
    Node* search(int d);        // 探索
    int insert(int x);      // 挿入
    int del(int x);         // 削除
    int deleteFirst();      // 先頭の削除
    int deleteLast();       // 末尾の削除
    void print();           // 表示
};
 
// searchメソッド（探索）
Node* List::search(int d)
{
    for(Node* p=head.next; p!=&head; p=p->next){
        if(p->data==d)
            return p;   // 見つかった
    }
 
    return 0;           // 見つからなかった
}
 
// insertメソッド（挿入）
int List::insert(int x)
{
    Node* p = new Node();
 
    if(p==0)
        return -1;      // メモリ確保エラー
 
    Node* q = &head;
    Node* r = head.next;
 
    p->prev = q;
    p->next = r;
    p->data = x;
 
    q->next = p;
    r->prev = p;
 
    return 0;           // 正常終了
}
 
// delメソッド（削除）
int List::del(int x)
{
    Node* p = search(x);
 
    if(p==0)
        return -2;      // 探索エラー
 
    Node* q = p->prev;
    Node* r = p->next;
 
    q->next = r;
    r->prev = q;
 
    delete p;
 
    return 0;           // 正常終了
}
 
// deleteFirstメソッド（先頭の削除）
int List::deleteFirst()
{
    Node* p = head.next;
 
    if(p==&head)
        return -2;      // 探索エラー
 
    Node* q = p->prev;
    Node* r = p->next;
 
    q->next = r;
    r->prev = q;
 
    delete p;
 
    return 0;           // 正常終了
}
 
// deleteLastメソッド（末尾の削除）
int List::deleteLast()
{
    Node* p = head.prev;
 
    if(p==&head)
        return -2;      // 探索エラー
 
    Node* q = p->prev;
    Node* r = p->next;
 
    q->next = r;
    r->prev = q;
 
    delete p;
 
    return 0;           // 正常終了
}
 
// printメソッド（表示）
void List::print()
{
    for(Node* p=head.next; p!=&head; p=p->next){
        cout << p->data;
        if(p->next==&head){
            cout << endl;
        }
        else{
            cout << ' ';
        }
    }
}
 
 
// main関数
int main()
{
    List L;
 
    int n;
    cin >> n;
 
    for(int i=0; i<n; i++){
        char com[20];
        cin >> com;
 
        if(com[0]=='i'){
            int x;
            cin >> x;
 
            L.insert(x);
        }
        else if(com[6]=='F'){
            L.deleteFirst();
        }
        else if(com[6]=='L'){
            L.deleteLast();
        }
        else{
            int x;
            cin >> x;
 
            L.del(x);
        }
    }
 
    L.print();
 
    return 0;
}