///
// File:  double_linked_list.cpp
// Author: ymiyamoto
//
// Created on Fri Jun 30 08:25:34 2017
//

#include <cstdint>

using namespace std;

struct double_linked_list_t {
  double_linked_list_t *next;
  double_linked_list_t *prev;
};

struct node_t : double_linked_list_t {
  uint32_t val;
};

double_linked_list_t *double_linked_list_create()
{
  double_linked_list_t *list = new double_linked_list_t;
  list->next = list;
  list->prev = list;
  return list;
}

static void iter(double_linked_list_t *list, bool (*when)(node_t *), void (*callback)(node_t *))
{
  node_t *node = (node_t *)list->next;
  while (node != list) {
    node_t *next = (node_t *)node->next;
    if (when(node)) {
      callback(node);
    }
    node = next;
  }
}

static bool always(node_t *node)
{
  return true;
}

static void _delete(node_t *node)
{
  node_t *prev_node = (node_t *)node->prev;
  node_t *next_node = (node_t *)node->next;
  prev_node->next = next_node;
  next_node->prev = prev_node;
  delete node;
}

void double_linked_list_destroy(double_linked_list_t *list)
{
  iter(list, always, _delete);
  delete list;
}

static uint32_t delete_val = 0;
static bool first = true;
static bool when_first_when_val_is(node_t *node)
{
  if ((node->val == delete_val) && first) {
    first = false;
    return true;
  } else {
    return false;
  }
}

void double_linked_list_delete(double_linked_list_t *list, uint32_t val)
{
  delete_val = val;
  first = true;
  iter(list, when_first_when_val_is, _delete);
}

void double_linked_list_insert(double_linked_list_t *list, uint32_t val)
{
  node_t *node = new node_t;
  node->val = val;
  node->next = list->next;
  node->prev = list;

  list->next->prev = node;
  list->next = node;
}

void double_linked_list_iter(double_linked_list_t *list, void (*callback)(uint32_t))
{
  node_t *node = (node_t *)list->next;
  while (node != list) {
    callback(node->val);
    node = (node_t *)node->next;
  }
}

void double_linked_list_delete_first(double_linked_list_t *list)
{
  node_t *node = (node_t *)list->next;
  if (node == list) return;

  node->next->prev = list;
  list->next = node->next;
  delete node;
}

void double_linked_list_delete_last(double_linked_list_t *list)
{
  node_t *node = (node_t *)list->prev;
  if (node == list) return;

  list->prev = node->prev;
  node->prev->next = list;
  delete node;
}

#if !defined(TEST)
#include <cstdio>

static uint32_t count = 0;
void callback(uint32_t val)
{
  if (count != 0) printf(" ");
  printf("%d", val);
  count++;
}

int32_t main()
{
  uint32_t num;
  scanf("%u", &num);

  double_linked_list_t *list = double_linked_list_create();

  for (uint32_t i = 0; i < num; i++) {
    char command[20];
    int32_t val;
    scanf("%s %d", command, &val);
    switch (command[0]) {
    case 'i':
      double_linked_list_insert(list, val);
      break;
    case 'd':
      if (command[6] == 'F') {
        double_linked_list_delete_first(list);
      } else if (command[6] == 'L') {
        double_linked_list_delete_last(list);
      } else {
        double_linked_list_delete(list, val);
      }
      break;
    }
  }

  double_linked_list_iter(list, callback);
  printf("\n");

  double_linked_list_destroy(list);
  return 0;
}
#endif