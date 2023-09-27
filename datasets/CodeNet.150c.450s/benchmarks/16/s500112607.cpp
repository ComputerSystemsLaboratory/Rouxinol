#include <stdio.h>
#include <stdlib.h>
#define MAXN 20000

// ノードを表す構造体
struct Node {
  int data ;
  int hight;
  struct Node * next ;
} ;

typedef struct Node Node ;

// 新しいノードのメモリを確保する
Node *create_node(int new_data, int new_hight) {
  Node *new_node = (Node *) malloc(sizeof(Node));
  if (!new_node) {
    fprintf(stderr, "could not allocate a node.\n");
    exit(1);
  }
  new_node->data = new_data;
  new_node->hight = new_hight;
  new_node->next = NULL;
  return new_node;
}

// リストのメモリを解放する
void clear_list(Node * head) {
  while (head) {
    Node * target = head ;
    head = head->next ;
    free(target) ;
  }
}

//リストが空か否か判定する
int is_empty(Node *head){
  if(head == NULL){
    return 1;
  }
  return 0;
}


// リストの先頭へ新しいノードを追加する
// リストの先頭のポインタを差し替えるため、リストの先頭へのポインタへのポインタを渡す
void push_front(Node **head, int new_data, int new_hight) {
  Node *new_node = create_node(new_data, new_hight) ;
  new_node->next = *head;
  *head = new_node;
}

//リストの先頭からノードを削除する
int pop_front(Node **head){
  Node *tmp = *head;
  int c = (*head)->data;
  *head = (*head)->next;
  free(tmp);
  return c;
}

// リストの要素を先頭から順に出力する
void print_list(const Node * head) {
  while(head) {
    printf("| %d |-> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main(void) {

  Node * top = NULL ;
  Node *sq = NULL;
  int data ;

  char s[MAXN];
  fgets(s, MAXN, stdin);
  //printf("%s\n", s);

  int i = 0, res = 0, h = 0,  c;

  while((c = s[i++]) != '\n' && c != '\0'){
    switch(c){
    case '\\':
      push_front(&top, i, 0);
      push_front(&sq, 0, h);
      h--;
      break;
    case '_':
      break;
    case '/':
      h++;
      if(!is_empty(top)){
        int tmp = pop_front(&top);
        res += i - tmp;
        int h2;
        tmp = i - tmp;
        while(!is_empty(sq) && (h2 = sq->hight) < h){
          tmp += pop_front(&sq);
          if(h2 == h){
            break;
          }
        }
        push_front(&sq, tmp, h);
      }
      break;
    default:
      break;
    }
  }

  printf("%d\n", res);
  //print_list(sq);
  int ans[MAXN] = {0}, j = 0;
  while(!is_empty(sq)){
    if(sq->data != 0){
      ans[j++] = sq->data;
    }
     pop_front(&sq);
  }
  printf("%d", j);
  for(i = j-1; i >= 0; --i){
    printf(" %d", ans[i]);
  }
  
  printf("\n");
    
  clear_list(top) ;

  return 0 ;
}

