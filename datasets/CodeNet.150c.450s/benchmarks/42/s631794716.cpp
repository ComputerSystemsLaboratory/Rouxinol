    #include <iostream>
    #include <cstdio>
    using namespace std;
    const int maxn = 100000 + 5;
      struct node{
      char my_name[10];
      int my_time;
    };

    int n,q;
    int head,tail;
    int q_time = 0;
    node que[maxn];

    void push_back(node& k){
      que[tail++] = k;
      tail %= (n+5);
    }

    node pop_front(){
    node k = que[head++];
    head %= (n+5);
    return k;
    }

    int main(){
    scanf("%d%d",&n,&q);
    head = 0;
    tail = 0;
    for(int i = 1;i <= n; i++){
    node Q;
    scanf("%s%d",Q.my_name,&Q.my_time);
    push_back(Q);
    }
    while(head != tail){
    node k = pop_front();
    if(k.my_time - q > 0){
    k.my_time -= q;
    push_back(k);
    q_time += q;
    }
    else{
    q_time += k.my_time;
    printf("%s %d\n",k.my_name,q_time);
    }
    }
    }