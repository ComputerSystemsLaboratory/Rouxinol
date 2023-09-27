#include <iostream>
#include <string>

using namespace std;

int size=0;
long long int heap[2000000];

int parent(int i){
  int return_num;
  if(i%2==0){
    return_num = (i-2)/2;
  }else{
    return_num = (i-1)/2;
  }
  return return_num;
}

int left_child(int i){
  return 2*i+1;
}

int right_child(int i){
  return 2*i+2;
}

int pop(){
  int ret = heap[0];
  int x = heap[--size];
  
  int i=0;
  while (left_child(i)<size){
    int l = left_child(i), r=right_child(i);
    if(r < size && heap[r] > heap[l]){
      l = r;
    }
    if(heap[l] <= x){
      break;
    }
    heap[i] = heap[l];
    i=l;
  }
    heap[i] = x;
    return ret;
}

void push(int x){
  int i = size++;
  while (i > 0){
    int p = parent(i);
    if( heap[p] >= x ){
      break;
    }else{
      heap[i] = heap[p];
      i=p;
    }
  }
  heap[i] = x;
}


int chenger(string str){
  if(str=="insert"){
    return 0;
  }else if (str == "extract"){
    return 1;
  }else if (str == "end"){
    return 2;
  }
  return -1;
}


int main(){
  string input_str;
  int input_num;
  int output_num;
  while(1){
    cin >> input_str;
    int a = chenger(input_str);
    switch(a){
    case 0:
      cin >> input_num;
      push(input_num);
      break;
    case 1:
      output_num = pop();
      cout << output_num << endl;
      break;
    case 2:
      return 0;
    }
  }
}