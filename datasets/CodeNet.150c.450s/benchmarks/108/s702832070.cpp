#include <stdio.h>

#define N 100     
#define SUCCESS 1 // 成功
#define FAILURE 0 // 失敗
#define INFTY 1 << 21 // 到達不可能を表す大きな値

int queue[N]; // キューの本体
int queue_head = 0; // データ先頭
int queue_num; // データ個数

int node_num, M[N + 1][N + 1];
int d[N]; // 距離で訪問状態(color)を管理する

int enqueue(int enq_data) // キューにデータを追加する
{
  if (queue_head + queue_num < N) {
    queue[queue_head + queue_num] = enq_data;
    queue_num++;
    return SUCCESS;
  } else {
    return FAILURE;
  }
}

int dequeue(int *deq_data) // キューからデータを取り出す
{
  if (queue_num > 0) {
    *deq_data = queue[queue_head];
    queue_num--;
    queue_head++;
    return SUCCESS;
  } else {
    return FAILURE;
  }
}

void bfs(int s) {
  enqueue(s); // 始点をキューに入れる
  for (int i = 1; i <= node_num; i++) d[i] = INFTY; // とりあえず全部INFTYにする
  d[s] = 0; // 始点から自分自身までの距離は0
  int u, p;
  while(queue_num > 0) { // キューが空でない間繰り返す
    u = queue[queue_head]; // キューの先頭からノードを取り出し，訪問
    dequeue(&p); // 同上
    for (int v = 1; v <= node_num; v++) {
        if (M[u][v] == 0) continue; // キュー先頭のノードとvが繋がってないならこのループは終了
        if (d[v] != INFTY) continue; // 既に距離を決めているならこのループは終了
        d[v] = d[u] + 1; // 次に訪問するノードまでの距離は，それまでの距離+1
        enqueue(v); // uに繋がっているノードは将来訪問しないといけない
    }
  }
  for (int i = 1; i <= node_num; i++) { // 表示部
    if (d[i] == INFTY) d[i] = -1;
    printf("%d %d\n", i, d[i]);
  }
}

// mainの流れはdfsと同じ(隣接行列の初期化→隣接行列にノード間の接続関係を登録→bfsを呼び出す)
int main(void)
{
  int u, v, k, i, j;
  
  scanf("%d", &node_num);
  for (i = 0; i <= node_num; i++) {
    for(j = 0; j <= node_num; j++) M[i][j] = 0;
  }

  for (i = 0; i < node_num; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d", &v);
      M[u][v] = 1;
    }
  }

  bfs(1);
  
  return 0;
}
