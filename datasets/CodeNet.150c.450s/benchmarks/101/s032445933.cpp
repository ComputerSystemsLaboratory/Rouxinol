#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>

#include <cstring>
#include <queue>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...) do { \
    printf("D(L%d) %s: ", __LINE__, __func__); \
    printf(__VA_ARGS__); \
  } while (false)
#else
#define DPRINTF(...)
#endif // DEBUG


const int kInvalid = -1;
const int kMaxUsers = 100 * 1000 + 1;

int g_group[kMaxUsers]; // 400 KiB

// 100 K * sizeof(vector<int>) + 100 K * sizeof(int)
// = 2.4 MiB + 100 K * sizeof(int)
vector<int> g_list[kMaxUsers];

void setRelations(int start, int end)
{
  g_list[start].push_back(end);
  g_list[end].push_back(start);
}


void doGrouptize()
{
  // debug info
  DPRINTF("size of g_group[] %lu Byte\n", sizeof(g_group));
  DPRINTF("size of g_list[]  %lu Byte\n", sizeof(g_list));

  // init
  int groupId = 0;
  //memset(g_group, kInvalid, kMaxUsers);
  for (int i = 0; i < kMaxUsers; i++)
    g_group[i] = kInvalid;

  for (int i = 0; i < kMaxUsers; i++)
  {
    if (g_group[i] != kInvalid)
      continue;

    g_group[i] = groupId;

    // grouptize connected users in BFS order
    queue<int> que;
    que.push(i);

    while (!que.empty())
    {
      const int current = que.front();
      que.pop();

      for (int j = 0; j < g_list[current].size(); j++)
      {
        const int next = g_list[current][j];

        if (g_group[next] != kInvalid)
          continue;

        g_group[next] = groupId;
        que.push(next);
      }
    }

    groupId++;
  }
}


void printAllRelations()
{
#if DEBUG
  for (int i = 0; i < kMaxUsers; i++)
  {
    for (int j = 0; j < g_list[i].size(); j++)
    {
      if (j == 0)
        DPRINTF("%d", i);

      printf(" %d", g_list[i][j]);

      if (j == g_list[i].size() - 1)
        cout << endl;
    }
  }
#endif // DEBUG
}


int main()
{
  int n, m;
  cin >> n >> m; cin.ignore();

  DPRINTF("number of users %d\n", n);
  DPRINTF("number of relations %d\n", m);

  for (int i = 0; i < m; i++)
  {
    int s, t;
    cin >> s >> t; cin.ignore();

    setRelations(s, t);
  }

  printAllRelations();

  doGrouptize();

  int q;
  cin >> q; cin.ignore();

  for (int i = 0; i < q; i++)
  {
    int s, t;
    cin >> s >> t; cin.ignore();

    DPRINTF("src %d  dst %d\n", s, t);

    if (g_group[s] == g_group[t])
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  return 0;

}

