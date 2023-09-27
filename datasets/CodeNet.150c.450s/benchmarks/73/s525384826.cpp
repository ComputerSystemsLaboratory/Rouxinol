#include <cstdio>
#include <vector>
#include <climits>
using namespace std;

template<typename Type>
struct SqrtDecomp {
    int SIZE;
    // node の前半には op2 を適用した値が入っているはずで、
    // 後半には op1 を適用した値が入っているはず

    // lazy は一様更新 → op1 を適用した値が入っているはず
    vector<Type> node, bucket, lazy, need_upd;
    Type (*op1) (Type x, Type y, int sz);
    Type (*op2) (Type x, Type y);
    Type I;

    SqrtDecomp( vector<Type> vec,
                Type (*g_op1) (Type x, Type y, int sz),
                Type (*g_op2) (Type x, Type y),
                Type X) {
        int N = vec.size();
        SIZE = 1; while(SIZE * SIZE < N) SIZE++;
        I = X, op1 = g_op1, op2 = g_op2;

        node.resize(SIZE*SIZE, I);
        bucket.resize(SIZE, I);
        lazy.resize(SIZE, I);
        need_upd.resize(SIZE, 0);

        for(int i=0; i<SIZE; i++) {
            Type rep_val = I;
            for(int j=0; j<SIZE && i*SIZE+j<N; j++) {
                int idx = (i*SIZE + j);
                node[idx] = vec[idx];
                rep_val = op2(rep_val, node[idx]);
            }
            bucket[i] = rep_val;
        }
    }

    void lazy_eval(int k) {
        int l = SIZE*k, r = SIZE*(k+1);
        // printf("lazy_eval: %d, lazy[k] = %d, l =  %d, r = %d\n", k, lazy[k], l, r);
        if(need_upd[k]) {
            Type seg_val = I;

            // 該当する下のノードをまず更新
            for(int i=l; i<r; i++) {
                node[i] = op1(node[i], lazy[k], 1);
                seg_val = op2(seg_val, node[i]);
            }

            // 上のノードを更新
            bucket[k] = seg_val;
        }
        lazy[k] = I;
        need_upd[k] = false;
    }

    void update(int l, int r, Type val) {
        int lidx = l / SIZE, ridx = r / SIZE;
        // 左端の更新
        lazy_eval(lidx);
        bucket[lidx] = I;
        for(int k=SIZE*lidx; k<SIZE*(lidx+1); k++) {
            if(l <= k && k < r) node[k] = op1(node[k], val, 1);
            bucket[lidx] = op2(bucket[lidx], node[k]);
        }

        if(lidx != ridx) {
            // 真ん中 (lazy を更新)
            for(int k=lidx+1; k<ridx; k++) {
                lazy[k] = op1(lazy[k], val, 1);
                need_upd[k] = true;
            }

            if(ridx != SIZE) {
                lazy_eval(ridx);
                bucket[ridx] = I;

                // 右端の更新
                for(int k=SIZE*ridx; k<SIZE*(ridx+1); k++) {
                    if(k < r) node[k] = op1(node[k], val, 1);
                    bucket[ridx] = op2(bucket[ridx], node[k]);
                }
            }
        }
    }

    Type query(int l, int r) {
        int lidx = l / SIZE, ridx = r / SIZE;
        // printf("lidx = %d, ridx = %d\n", lidx, ridx);
        Type ret = I;
        
        // 左端の取得
        for(int k=l; k<min(r, SIZE*(lidx+1)); k++) {
            lazy_eval(lidx);
            ret = op2(ret, node[k]);
        }

        if(lidx != ridx) {
            for(int k=lidx+1; k<ridx; k++) {
                // 全体の値と lazy の値を考慮して値を計算
                Type val = (need_upd[k] ? op1(bucket[k], lazy[k], SIZE) : bucket[k]);
                ret = op2(ret, val);
            }

            for(int k=SIZE*ridx; k<r; k++) {
                lazy_eval(ridx);
                ret = op2(ret, node[k]);
            }
        }

        return ret;
    }

    void print_debug() {
        printf("<< node >>\n");
        printf("upper bucket:\n");
        for(int i=0; i<SIZE; i++) {
            int l = SIZE*i, r = SIZE*(i+1);
            printf("[%6d, %6d) -> %d\n", l, r, bucket[i]);
        }
        printf("lower bucket:\n");
        for(int i=0; i<SIZE*SIZE; i++) {
            printf("[%6d, %6d) -> %d\n", i, i+1, node[i]);
        }

        printf("<< lazy >>\n");
        printf("upper bucket:\n");
        for(int i=0; i<SIZE; i++) {
            int l = SIZE*i, r = SIZE*(i+1);
            printf("[%6d, %6d) -> %d\n", l, r, lazy[i]);
        }
        printf("\n");
    }
};

/*
// Range Minimum Query
int upd_f(int a, int b, int sz) {
    return b;
}
int qry_f(int a, int b) {
    return min(a, b);
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, INT_MAX), upd_f, qry_f, INT_MAX);

    while(Q--) {
        int query, a, b; scanf("%d%d%d", &query, &a, &b);
        if(query == 0) {
            sqr.update(a, a+1, b);
        }
        if(query == 1) {
            printf("%d\n", sqr.query(a, b+1));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/

// Range Sum Query
int upd_f(int a, int b, int sz) {
    return a + sz * b;
}
int qry_f(int a, int b) {
    return a + b;
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, 0), upd_f, qry_f, 0);

    while(Q--) {
        int query, a, b; scanf("%d%d%d", &query, &a, &b);
        if(query == 0) {
            sqr.update(a-1, a, b);
        }
        if(query == 1) {
            printf("%d\n", sqr.query(a-1, b));
        }
        // sqr.print_debug();
    }
    return 0;
}

/*
// Range Update Query
int upd_f(int a, int b, int sz) {
    return b;
}
int qry_f(int a, int b) {
    return min(a, b);
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, INT_MAX), upd_f, qry_f, INT_MAX);

    while(Q--) {
        int query; scanf("%d", &query);
        if(query == 0) {
            int l, r, x; scanf("%d%d%d", &l, &r, &x);
            sqr.update(l, r+1, x);
        }
        if(query == 1) {
            int x; scanf("%d", &x);
            printf("%d\n", sqr.query(x, x+1));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/

/*
// Range Add Query
int upd_f(int a, int b, int sz) {
    return a + sz * b;
}
int qry_f(int a, int b) {
    return a + b;
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, 0), upd_f, qry_f, 0);

    while(Q--) {
        int query; scanf("%d", &query);
        if(query == 0) {
            int l, r, x; scanf("%d%d%d", &l, &r, &x);
            sqr.update(l-1, r, x);
        }
        if(query == 1) {
            int x; scanf("%d", &x);
            printf("%d\n", sqr.query(x-1, x));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/

/*
// RAQ and RUQ
int upd_f(int a, int b, int sz) {
    return b;
}
int qry_f(int a, int b) {
    return min(a, b);
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, INT_MAX), upd_f, qry_f, INT_MAX);

    while(Q--) {
        int query; scanf("%d", &query);
        if(query == 0) {
            int l, r, x; scanf("%d%d%d", &l, &r, &x);
            sqr.update(l, r+1, x);
        }
        if(query == 1) {
            int l, r; scanf("%d%d", &l, &r);
            printf("%d\n", sqr.query(l, r+1));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/

/*
// RSQ and RAQ
int upd_f(int a, int b, int sz) {
    return a + sz * b;
}
int qry_f(int a, int b) {
    return a + b;
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, 0), upd_f, qry_f, 0);

    while(Q--) {
        int query; scanf("%d", &query);
        if(query == 0) {
            int l, r, x; scanf("%d%d%d", &l, &r, &x);
            sqr.update(l-1, r, x);
        }
        if(query == 1) {
            int l, r; scanf("%d%d", &l, &r);
            printf("%d\n", sqr.query(l-1, r));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/

/*
// RMQ and RAQ
int upd_f(int a, int b, int sz) {
    return a + sz * b;
}
int qry_f(int a, int b) {
    return min(a ,b);
}

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    SqrtDecomp<int> sqr(vector<int>(N, 0), upd_f, qry_f, INT_MAX);

    while(Q--) {
        int query; scanf("%d", &query);
        if(query == 0) {
            int l, r, x; scanf("%d%d%d", &l, &r, &x);
            sqr.update(l, r+1, x);
        }
        if(query == 1) {
            int l, r; scanf("%d%d", &l, &r);
            printf("%d\n", sqr.query(l, r+1));
        }
        // sqr.print_debug();
    }
    return 0;
}
*/
