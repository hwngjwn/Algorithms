#include <iostream>
#include <vector>
using namespace std;

//백준 맞추기 드럽게 힘드네 진짜
//아니 endl 과 '\n' 차이가 그렇게 큰가>? 얼탱없음

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n_num; //수의 개수
    int n_sum; // 합을 구해야 하는 횟수
    int sum[100001] = {};
    cin >> n_num >> n_sum;
    
    for(int i = 1; i <= n_num; i++){    
        int tmp; 
        cin >> tmp;
        sum[i] = sum[i-1] + tmp;
    }

    for(int i = 0; i < n_sum; i++){
        int from ,to;
        cin >> from >> to;
        cout <<(sum[to] - sum[from-1])<<endl;
    }
}