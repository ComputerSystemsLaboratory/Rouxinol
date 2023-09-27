#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <queue>

const int nmax = 100005;
int n;
const int NIL = -1;

std::vector<int> adjlist[nmax];
std::array<int, nmax> group;

std::stack<int> stk;
std::array<int, nmax> state;

void init()
{
  group.fill(NIL);
  state.fill(0);
}

int next(int v)
{
  for (int i=0; i<adjlist[v].size(); ++i)
    {
      auto v_next = adjlist[v][i];
      if (state[v_next] == 0)
        return v_next;
    }
  return NIL;
}

void dfs_1v(int u, int group_id)
{
  stk.push(u);
  state[u] = 1;
  group[u] = group_id;

  while (!stk.empty())
    {
      auto v = stk.top();
      auto v_next = next(v);

      if (v_next != NIL)
        {
          stk.push(v_next);
          state[v_next] = 1;
          group[v_next] = group_id;
        }
      else
        {
          state[v] = 2;
          stk.pop();
        }
    }
}

void grouping()
{
  init();

  auto group_id = 0;
  for (int i=0; i<n; ++i)
    {
      if (state[i] == 0)
        {
          dfs_1v(i, group_id);
          group_id++;
        }
    }
}

int main ()
{
  int m;
  std::cin >> n >> m;

  for (int i=0; i<m; ++i)
    {
      int s, t;
      std::cin >> s >> t;

      adjlist[s].push_back(t);
      adjlist[t].push_back(s);
    }

  grouping();

  int q;
  std::cin >> q;
  for (int i=0; i<q; ++i)
    {
      int s, t;
      std::cin >> s >> t;
      if (group[s] == group[t] && group[s] != NIL)
        std::cout << "yes\n";
      else
        std::cout << "no\n";
    }
}

