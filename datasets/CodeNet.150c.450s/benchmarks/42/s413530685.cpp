#include<iostream>
#include<stdio.h>
using namespace std;

#define MAX 100000

int head = 0;
int tail = 0;

pair<string, int> queue[100000];

void enqueue(pair<string, int> val) {
  queue[tail] = val;
  if(tail >= MAX - 1) {
    tail = 0;
  }
  else {
    tail++;
  }
}

bool isEmpty() {
  return head == tail;
}

pair<string, int> dequeue() {
  pair<string, int> val = queue[head];
  if(head >= MAX - 1) {
    head = 0;
  }
  else {
    head++;
  }
  return val;
}

int main(void) {
  int n;
  cin >> n;

  int time;
  cin >> time;

  char input[10];
  int data;
  for(int i = 0; i < n; i++) {
    pair<string, int> tmp;
    scanf("%s", input);
    scanf("%d", &data);

    tmp.first = input;
    tmp.second = data;
    enqueue(tmp);
  }

  int passedTime = 0;

  while(!isEmpty()) {
    pair<string, int> tmp = dequeue();
    if(tmp.second > time) {
      tmp.second -= time;
      passedTime += time;
      enqueue(tmp);
    }
    else {
      passedTime += tmp.second;
      tmp.second = 0;
      cout << tmp.first << " " << passedTime << endl;
    }
  }

  return 0;
}