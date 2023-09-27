// dictionary prog
// command "insert" or "find"
#include<iostream>
#include<string>
typedef struct dictionary{
  struct dictionary *A, *C, *G, *T;
  bool a, c, g, t;
} dictionary;
void insert(void);
void find(void);
void init(dictionary*);
dictionary *Dic;
int main(){
  int n;
  std::string func, ins="insert", fin="find";
  init(Dic = new dictionary);
  std::cin >> n;
  for(int i=0; i<n; i++){
    std::cin >> func;
    if(func == ins) insert();
    else if(func == fin) find();
  }
  return 0;
}
void insert(void){
  std::string in;
  dictionary *n, *temp=Dic;
  std::cin >> in;
  for(int i=0; i<in.length() ; i++){
    switch(in[i]){
      case 'A':
      if(temp->A == NULL) init(n = new dictionary), temp->A = n;
      if(i == in.length()-1) temp->a = true;
      temp = temp->A;
      break;
      case 'C':
      if(temp->C == NULL) init(n = new dictionary), temp->C = n;
      if(i == in.length()-1) temp->c = true;
      temp = temp->C;
      break;
      case 'G':
      if(temp->G == NULL) init(n = new dictionary), temp->G = n;
      if(i == in.length()-1) temp->g = true;
      temp = temp->G;
      break;
      case 'T':
      if(temp->T == NULL) init(n = new dictionary), temp->T = n;
      if(i == in.length()-1) temp->t = true;
      temp = temp->T;
      break;
      default:
      break;
    }
  }
}
void find(void){
  std::string in;
  dictionary *temp=Dic;
  std::cin >> in;
  for(int i=0; i!=in.length() ; i++){
    switch(in[i]){
      case 'A':
      if(temp->A == NULL || (in[i+1] == '\0' && !temp->a)){
        std::cout << "no" << std::endl;
        return;
      }
      temp = temp->A;
      break;
      case 'C':
      if(temp->C == NULL || (in[i+1] == '\0' && !temp->c)){
        std::cout << "no" << std::endl;
        return;
      }
      temp = temp->C;
      break;
      case 'G':
      if(temp->G == NULL || (in[i+1] == '\0' && !temp->g)){
        std::cout << "no" << std::endl;
        return;
      }
      temp = temp->G;
      break;
      case 'T':
      if(temp->T == NULL || (in[i+1] == '\0' && !temp->t)){
        std::cout << "no" << std::endl;
        return;
      }
      temp = temp->T;
      break;
      default:
      break;
    }
  }
  std::cout << "yes" << std::endl;
}
void init(dictionary *n){
  n->A = n->C = n->G = n->T = NULL, n->a = n->c = n->g = n->t = false;
}