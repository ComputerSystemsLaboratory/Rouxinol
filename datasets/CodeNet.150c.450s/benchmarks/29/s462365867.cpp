///
// File:  alds1_3_c.cpp
// Author: ymiyamoto
//
// Created on Sat Oct  7 15:06:49 2017
//

#include <cstdint>
#include <cstring>
#include <iostream>

using namespace std;

struct linked_list_t {
  linked_list_t *prev;
  linked_list_t *next;
  int64_t val;
};

static void delete_list(linked_list_t *list)
{
  linked_list_t *prev = list->prev;
  linked_list_t *next = list->next;
  prev->next = next;
  next->prev = prev;
  delete list;
}

int32_t main()
{
  uint64_t n;
  cin >> n;

  linked_list_t list;
  list.prev = &list;
  list.next = &list;
  list.val = -1;

  for (uint64_t i = 0; i < n; i++) {
    char str[20];
    scanf("%s", str);

    if (str[0] == 'i') {
      int64_t val;
      scanf("%lld", &val);
      linked_list_t *new_list = new linked_list_t;
      linked_list_t *next = list.next;
      linked_list_t *prev = &list;
      next->prev = new_list;
      prev->next = new_list;

      new_list->val = val;
      new_list->next = next;
      new_list->prev = prev;
    } else if (str[0] == 'd') {
      if (strlen(str) == 6) {
        int64_t val;
        scanf("%lld", &val);
        linked_list_t *l = list.next;
        while (true) {
          if (l->val == val) {
            delete_list(l);
            break;
          }
          l = l->next;
          if (l->val == -1) break;
        }
      } else if (str[6] == 'F') {
        delete_list(list.next);
      } else {
        delete_list(list.prev);
      }
    }
  }

  linked_list_t *l = list.next;
  while (l->val != -1) {
    if (l != list.next) cout << " ";
    cout << l->val;
    l = l->next;
  }

  cout << endl;

  return 0;
}