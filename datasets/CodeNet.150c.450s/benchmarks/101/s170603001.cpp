#include <cstdio>
#include <set>
#include <queue>
#include <vector>

void assignGroup(const std::vector<std::set<int>>& firend_relationships, std::vector<int>& group)
{
  int current_group = 1;
  std::queue<int> next_queue;
  std::set<int> searched_set;

  for (int i = 0; i < (int)firend_relationships.size(); ++i)
  {
    // Any group is the id assigned, then skip it
    if (searched_set.count(i) != 0)
      continue;

    group[i] = current_group;
    next_queue.push(i);

    while (!next_queue.empty())
    {
      // Remove from waiting list
      int current_id = next_queue.front();
      next_queue.pop();
      // Add to searched list
      searched_set.insert(current_id);

      // Add to waiting list which is not serached yet
      std::set<int>::const_iterator itr;
      for (itr = firend_relationships[current_id].begin();
           itr != firend_relationships[current_id].end();
           ++itr)
      {
        // Ignore searched ones
        if (searched_set.count(*itr) != 0)
          continue;

        group[*itr] = current_group;
        next_queue.push(*itr);
      }
    }

    // Assign the different group number
    ++current_group;
  }
}

bool isConnected(const int& id_from, const int& id_to, const std::vector<int>& group)
{
  return group[id_from] == group[id_to];
}

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  std::vector<std::set<int>> firend_relationships;
  std::vector<int> group;
  firend_relationships.resize(n);
  group.resize(n);
  for (int i = 0; i < m; ++i)
  {
    int id1, id2;
    scanf("%d%d", &id1, &id2);
    firend_relationships[id1].insert(id2);
    firend_relationships[id2].insert(id1);
  }

  assignGroup(firend_relationships, group);

  int q;
  scanf("%d", &q);
  for (int i = 0; i < q; ++i)
  {
    int id1, id2;
    scanf("%d%d", &id1, &id2);
    if (isConnected(id1, id2, group))
      printf("yes\n");
    else
      printf("no\n");
  }

  return 0;
}
