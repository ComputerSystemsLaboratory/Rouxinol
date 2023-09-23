#include <cstdio>

int
main(void)
{
  int n, m;
  
  std::scanf("%d %d", &n, &m);

  int m_a[n][m], v_b[m];
  long v_c[n];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::scanf("%d", &m_a[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    std::scanf("%d", &v_b[i]);
  }

  for (int i = 0; i < n; i++) {
    v_c[i] = 0;
    for (int j = 0; j < m; j++) {
      v_c[i] += m_a[i][j] * v_b[j];
    }
  }

  for (int i = 0; i < n; i++) {
    std::printf("%ld\n", v_c[i]);
  }
  
  return 0;
}

