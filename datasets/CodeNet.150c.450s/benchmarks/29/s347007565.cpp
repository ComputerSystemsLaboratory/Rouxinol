#include <iostream>
#include <string>

typedef struct d{
  private:
    static const int max = 1000001;/*量に応じて変更*/
    int head,tail;
    int a[max];
  public:
    void initialize(){
      head=0;tail=0;
    }
    bool isEmpty(){
      return head==tail;
    }
    void print(){
      if (head<tail){
        for (int i=tail-1;i>=head;i--){
          if (i!=tail-1)std::cout  << ' ';
          std::cout << a[i] ;
        }
        std::cout << '\n';
      }else {
        for (int i=tail+max-1;i>=head;i--){
          if (i!=tail+max-1)std::cout  << ' ';
          std::cout << a[i%max] ;
      }
      std::cout << '\n';
    }
  }
    void insert(int x){
      if (tail==max)tail=0;
      a[tail]=x;
      tail++;
    }
    void deleteFirst(){
      tail--;
      if (tail==0)tail=max;
    }
    void deleteLast(){
      head++;
      if (head==max)head=0;
    }
    void del(int x){
      if (head<tail){
        for (int i=tail-1;i>=head;i--){
          if (a[i]==x){
            for (int j=i+1;j<tail;j++){
              a[j-1]=a[j];
            }
            tail--;
            break;
          }
        }
      }else {
        for (int i=tail+max-1;i>=head;i--){
          if (a[i%max]==x){
            for (int j=i+1;j<tail+max;j++){
              a[(j-1)%max]=a[j%max];
            }
            tail--;
            if (tail==0)tail=max;
            break;
          }
        }
      }
    }

}dlList;

int main(){
  int n,x;
  dlList l;
  l.initialize();
  std::string req;
  std::cin >> n;
  for (int i=0;i<n;i++){
    std::cin >> req;
    if (req=="insert"){
      std::cin >> x;
      l.insert(x);
    }else if (req=="delete"){
      std::cin >> x;
      l.del(x);
    }else if (req=="deleteFirst"){
      l.deleteFirst();
    }else if (req=="deleteLast"){
      l.deleteLast();
    }
  }
  l.print();
}

