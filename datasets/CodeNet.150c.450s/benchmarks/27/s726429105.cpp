#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

struct Node { 
    int k;
    Node *p, *l, *r; 
};
Node *N, *R;

void insert(int u) {
    Node *a = R, *b = N, *c;
    c = (Node *)malloc(sizeof(Node));
    c->k = u, c->l = N, c->r = N;

    while(a != N) {
        b = a;
        if(c->k < a->k) a = a->l;
        else a = a->r;
    }
    c->p = b;
    if(b == N) {
        R = c;
    } else {
        if(c->k < b->k) b->l = c;
        else b->r = c;
    }
}

void inOrder(Node *u) {
    if(u == N) return;
    inOrder(u->l);
    printf(" %d", u->k);
    inOrder(u->r);
}

void preOrder(Node *u) {
    if(u == N) return;
    printf(" %d", u->k);
    preOrder(u->l);
    preOrder(u->r);
}

int main()
{
    #ifdef LOCAL
        freopen("E:\\Temp\\input.txt", "r", stdin);
        freopen("E:\\Temp\\output.txt", "w", stdout);
    #endif

    int a, i, n;
    char c[10];
    scanf("%d", &n);
    for(i=0; i<n; ++i) {
        scanf("%s", c);
        if(c[0] == 'i') {
            scanf("%d", &a);
            insert(a);
        } else {
            inOrder(R); printf("\n");
            preOrder(R); printf("\n");
        }
    }

    return 0;
}
