#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#define N 0
#define S 1
#define E 2
#define W 3

using namespace std;

int main(void) {
    int height, width, n;
    scanf("%d %d %d", &height, &width, &n);
    pair<int, int> start;

    vector < vector< int >  > distance, visited;
    vector < vector < char > > nodes;
    nodes.resize(height); distance.resize(height); visited.resize(height);

    for (int i=0; i<height; i++) {
        nodes[i].resize(width);
        distance[i].resize(width, height*width+1);
        visited[i].resize(width, 0);
    }

    char atribute;
    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            scanf(" %c", &atribute);
            nodes[i][j] = atribute;
            if (atribute == 'S'){
                start = make_pair(i,j);    
            }
        }
    }

    // do DFS
    queue< pair<int, int> > dfs;
    pair<int, int> node;
    int next_goal = 1;
    int minutes = 0;

    while (next_goal < (n+1)) {
        //initialize()
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) {
                visited[i][j] = 0;
                distance[i][j] = height*width+1;
            }
        }

        while (!dfs.empty()) {
            dfs.pop();
        }

        dfs.push(start);
        distance[start.first][start.second] = 0;
        visited[start.first][start.second] = 1;
        //printf("start with goal %d, which point is (%d, %d)\n", next_goal-1, start.first, start.second);

        while(!dfs.empty()) {
            node = dfs.front();
            dfs.pop();

            //printf("Here is (%d,%d); distance is %d\n", node.first, node.second, distance[node.first][node.second]);
           // look north
            if (node.first != 0) {
                if (visited[node.first-1][node.second] == 0){
                    if (nodes[node.first-1][node.second] != 'X') {
                        dfs.push(make_pair(node.first-1,node.second));
                        visited[node.first-1][node.second] = 1;
                        distance[node.first-1][node.second] = distance[node.first][node.second]+1;
                        if (atoi(&nodes[node.first-1][node.second]) == next_goal) {
                            next_goal++;
                            start = make_pair(node.first-1, node.second);
                            minutes += distance[node.first-1][node.second];
              //              printf("achieve to goal %d; here is (%d, %d)\n", next_goal-1, node.first-1, node.second);
                //            printf("now takes %d minutes\n", minutes);
                            break;
                        }
                    } 
                }
            }
             // look south
            if (node.first != height-1) {
                if (visited[node.first+1][node.second] == 0) {
                    if (nodes[node.first+1][node.second] != 'X') {
                        dfs.push(make_pair(node.first+1,node.second));
                        visited[node.first+1][node.second] = 1;
                        distance[node.first+1][node.second] = distance[node.first][node.second]+1;
                        if (atoi(&nodes[node.first+1][node.second]) == next_goal) {
                            next_goal++;
                            start = make_pair(node.first+1, node.second);
                            minutes += distance[node.first+1][node.second];
                  //          printf("achieve to goal %d; here is (%d, %d)\n", next_goal-1, node.first+1, node.second);
                    //        printf("now takes %d minutes\n", minutes);
                            break;
                        }
                    } 
                }
            }
            
            // look west
            if (node.second != 0) {
                if (visited[node.first][node.second-1] == 0) {
                    if (nodes[node.first][node.second-1] != 'X') {
                        dfs.push(make_pair(node.first,node.second-1));
                        visited[node.first][node.second-1] = 1;
                        distance[node.first][node.second-1] = distance[node.first][node.second]+1;
                        if (atoi(&nodes[node.first][node.second-1]) == next_goal) {
                            next_goal++;
                            start = make_pair(node.first, node.second-1);
                            minutes += distance[node.first][node.second-1];
                        //    printf("achieve to goal %d; here is (%d, %d)\n", next_goal-1, node.first, node.second-1);
                      //      printf("now takes %d minutes\n", minutes);
                            break;
                        }
                    } 
                }
            }
             // look east
            if (node.second != width-1) {
                if (visited[node.first][node.second+1] == 0) {
                    if (nodes[node.first][node.second+1] != 'X') {
                        dfs.push(make_pair(node.first,node.second+1));
                        visited[node.first][node.second+1] = 1;
                        distance[node.first][node.second+1] = distance[node.first][node.second]+1;
                        if (atoi(&nodes[node.first][node.second+1]) == next_goal) {
                            next_goal++;
                            start = make_pair(node.first, node.second+1);
                            minutes += distance[node.first][node.second+1];
                        //    printf("achieve to goal %d; here is (%d, %d)\n", next_goal-1, node.first, node.second+1);
                      //      printf("now takes %d minutes\n", minutes);
                            break;
                        }
                    } 
                }
            } 
        }
    }
    //printf("\n");
    printf("%d\n", minutes);
    
    return 0;
}