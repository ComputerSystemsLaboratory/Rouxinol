#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAX_DATA_NUM 10000000

int Q[MAX_DATA_NUM];
int head, tail;

void enqueue(int num){
  Q[tail] = num;
  tail++;
  if(tail == MAX_DATA_NUM)tail = 0;
}

int dequeue(){
  int res = Q[head];
  head++;
  if(head == MAX_DATA_NUM - 1)head = 0;
  return res;
}

int main(){
  int n, q;
  cin >> n >> q;
  vector<string> name(n);
  vector<int> name_num(n);
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> name[i] >> tmp;
    name_num[i] = i;
    enqueue(tmp);
  }
  int cnt = 0, num = 0;
  while(1){
    int i;
    for(i = 0; i < n - num; i++){
      int s = dequeue() - q;
      if(s <= 0){
        cnt += s + q;
        cout << name[name_num[i]] << " " << cnt << endl;
        name_num.erase(name_num.begin() + i);
        i--;
        num++;
      }else {
        cnt += q;
        enqueue(s);
      }
    }
    if(num == n)break;
  }
}