#include <stdio.h>
#include <stdlib.h>

int n, m;

void merge(int *u, int *net, int oldnet, int newnet);

int main(int argc, char *argv[])
{
  int i, s, t, p, q;
  int *u;
  int *net;

  scanf("%d", &n);
  scanf("%d", &m);
  u = (int *)malloc(sizeof(int) * n);
  net = (int *)malloc(sizeof(int) * (m + 1));
  for (i = 0; i < n; i++) u[i] = -1;
  for (i = 0; i <= m; i++) net[i] = 0;

  p = 1;

  for (i = 0; i < m; i++) {
    scanf("%d", &s);
    scanf("%d", &t);
    if (s != t) {
      if (u[s] == -1 && u[t] == -1) {
    u[s] = p;
    u[t] = p;
    net[p] += 2;
    p++;
      } else {
    if (u[s] != -1 && u[t] == -1) {
      u[t] = u[s];
      net[u[s]]++;
    } else if (u[s] == -1 && u[t] != -1) {
      u[s] = u[t];
      net[u[t]]++;
    } else {
      if (u[s] != u[t]) {
        if (net[u[s]] > net[u[t]]) merge(u, net, u[t], u[s]);
        else merge(u, net, u[s], u[t]);
      }
    }
      }
    }
  }

  scanf("%d", &q);

  for (i = 0; i < q; i++) {
    scanf("%d", &s);
    scanf("%d", &t);

    if (s == t) printf("yes\n");
    else {
      if (u[s] == u[t] && u[s] != -1 && u[t] != -1) printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}

void merge(int *u, int *net, int oldnet, int newnet)
{
  int i;

  for (i = 0; i < n; i++) {
    if (u[i] == oldnet) u[i] = newnet;
  }

  net[newnet] += net[oldnet];
  net[oldnet] = 0;
}