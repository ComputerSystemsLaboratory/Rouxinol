#include <iostream>
#include <string>
typedef struct{
  int n;
  std::string str;
}data;


typedef struct q{
  private:
    static const int max = 100001;/*量に応じて変更*/
    int head,tail;
    data a[max];
  public:
    void initialize(){
      head=0;tail=0;
    }
    bool isEmpty(){
      return head==tail;
    }
    void enqueue(data x){
      if (tail==max)tail=0;
      a[tail]=x;
      tail++;
    }
    data dequeue(){
      if (head==max)head=0;
      head++;
      return a[head-1];
    }
}queue;

int main(){
  queue q;
  int n,k,i,time=0;
  data temp;
  std::cin >> n>>k;
  for (i=0;i<n;i++){
    std::cin >> temp.str>>temp.n;
    q.enqueue(temp);
  }
  while (!(q.isEmpty())){
    temp=q.dequeue();
    if (temp.n<=k){
      time+=temp.n;
      std::cout << temp.str<<' '<<time << '\n';
    }else{
      time+=k;
      temp.n-=k;
      q.enqueue(temp);
    }
  }

}

