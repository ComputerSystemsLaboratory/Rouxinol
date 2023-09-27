#include <cstdio>
#include <string>

// class List
// {
//     int* data_;
//     int begin_;
//     int end_;
// public:
//     List()
//     {
//         data_  = new int[2000000];
//         begin_ = 1999999;
//         end_   = 1999999;
//     }
//     void Insert(int X)
//     {
//         --begin_;
//         data_[begin_] = X;
//     }
//     void Delete(int X)
//     {
//         int Index = end_;
//         for(int i = begin_; i < end_; ++i){
//             if(X == data_[i]){
//                 Index = i;
//                 break;
//             }
//         }
//         if(Index == end_) return;
//         for(int i = Index; i < end_; ++i){
//             data_[i] = data_[i+1];
//         }
//         end_--;
//     }
//     void DeleteFirst()
//     {
//         begin_++;
//     }
//     void DeleteLast()
//     {
//         end_--;
//     }
//     void Show()const
//     {
//         printf("%d", data_[begin_]);
//         for(int i = begin_ + 1; i < end_; ++i){
//             printf(" %d", data_[i]);
//         }
//         printf("\n");
//     }
// };

int main()
{
    // List list;
    int* data_ = new int[2000001];
    int begin_ = 2000000;
    int end_   = 2000000;

    int n;
    std::scanf("%d\n", &n);
    char com[1024];
    for(int i = 0; i < n; ++i){
        std::fgets(com, 1024, stdin);
        if(com[6] == 'F'){
            // list.DeleteFirst();
            begin_++;
        }else
        if(com[6] == 'L'){
            // list.DeleteLast();
            end_--;
        }else{
            int v = 0;
            for(int j = 7; com[j] >= '0' && com[j] <= '9'; ++j){
                v = v*10 + (com[j] - '0');
            }
            if(com[0] == 'i'){
                // list.Insert(v);
                --begin_;
                data_[begin_] = v;
            }else
            if(com[0] == 'd'){
                // list.Delete(v);
                int Index = end_;
                for(int i = begin_; i < end_; ++i){
                    if(v == data_[i]){
                        Index = i;
                        break;
                    }
                }
                if(Index == end_) continue;
                for(int i = Index; i < end_; ++i){
                    data_[i] = data_[i+1];
                }
                end_--;
            }
        }
    }
    // list.Show();
    printf("%d", data_[begin_]);
    for(int i = begin_ + 1; i < end_; ++i){
        printf(" %d", data_[i]);
    }
    printf("\n");
    return 0;
}