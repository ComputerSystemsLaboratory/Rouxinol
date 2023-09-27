#include <cstdio>

#define MAX_S 12

class Trie {
public:
  bool exist;
  char c;
  Trie* child[4];
  Trie(bool exist,char c);
  ~Trie();
  void addNext(Trie* trie,int id);
};
Trie::Trie(bool exist,char c) {
  this->exist = exist;
  this->c = c;
  for(int i=0;i<4;i++) {
    this->child[i] = NULL;
  }
}
Trie::~Trie() {}
void Trie::addNext(Trie* trie,int id) {
  this->child[id] = trie;
}
Trie* root = new Trie(true,'$');

int charToid(char c) {
  switch(c) {
    case 'A': return 0;
    case 'C': return 1;
    case 'G': return 2;
    case 'T': return 3;
  };
  return -1;
}

void insert(char *str) {
  Trie* t = root;
  for(int i=0;str[i]!='\0';i++) {
    int id = charToid(str[i]);
    if(t->child[id] == NULL) {
      Trie* next_t = new Trie(false, str[i]);
      t->addNext(next_t,id);
    }
    t = t->child[id];
  }
  t->exist = true;
}

bool find(char *str) {
  Trie* t = root;
  for(int i=0;str[i]!='\0';i++) {
    int id = charToid(str[i]);
    if(t->child[id] == NULL) {
      Trie* next_t = new Trie(false, str[i]);
      t->addNext(next_t,id);
    }
    t = t->child[id];
  }
  return t->exist;
}

int main(void) {
  int n; scanf("%d", &n);
  char str[MAX_S+1];
  bool exist;
  while(n--) {
    scanf("%s", str);
    if(str[0] == 'i') {
      // insert
      scanf("%s", str);
      insert(str);
    } else if(str[0] == 'f') {
      // find
      scanf("%s", str);
      if(find(str)) printf("yes\n");
      else printf("no\n");
    }
  }
}