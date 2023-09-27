#include <iostream>
#define inf 10000000
#define llint long long int

using namespace std;

int n;
int town_num;
int graph[12][12];

int dist[12];
bool checked[12];

int getmin(int a, int b)
{
  if(a > b) return b;
  else return a;
}

void dijkstra(int start)
{
  for(int i = 0; i < town_num; i++) checked[i] = false;
  for(int i = 0; i < town_num; i++) dist[i] = inf;
  dist[start] = 0;

  while(1){
    int min = inf, min_i = -1;
    for(int i = 0;i < town_num; i++){
      if(checked[i] || dist[i] == inf) continue;
      if(min > dist[i]){
		min = dist[i];
		min_i = i;
      }
    }
    if(min_i == -1) break;
  	
    checked[min_i] = true;
    for(int j = 0; j < town_num; j++){
    	if(checked[j]) continue;
    	if(graph[min_i][j] == inf) continue;
      dist[j] = getmin(dist[j], dist[min_i] + graph[min_i][j]);
    }
  }
}


int getsum(int pivot)
{
  dijkstra(pivot);

  int sum = 0;
  for(int i = 0; i < town_num; i++){
    sum += dist[i];
  }
  return sum;
}


int main(void)
{
  while(1){
	 cin >> n;
	if(n == 0) break;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if(i == j) graph[i][j] = 0;
			else graph[i][j] = inf;
      	}
	}

  	town_num = -1;
    int a, b, c;
    for(int i = 0; i < n; i++){
      	cin >> a >> b >> c;
      	if(graph[a][b] > c){
			graph[a][b] = c;
			graph[b][a] = c;
    	}
    	if(a > town_num) town_num = a;
    	if(b > town_num) town_num = b;
    }
  	town_num++;

    int min_i, min = inf, val;
    for(int i = 0; i < town_num; i++){
      val = getsum(i);
      if(val < min){
		min = val;
		min_i = i;
      }
    }

    cout << min_i << " " << min << endl;
  }

  return 0;
}