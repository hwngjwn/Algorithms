#include <iostream>
using namespace std;

//곱하는 과정에서 오버플로우가 발생할 수 있음을 인지해야함
//근데 왜 배열이 오버플로우가 되징? 
//tmp에서 sum value를 더할때 오버플로우가 될 수 있다!


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N : 입력 숫자의 개수 M : 나누는 수
    long long int count = 0; // m으로 나눠지는 구간의 수
    cin >> N >> M;
    long long int sum[1000001] = {};

    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        sum[i+1] = sum[i] + tmp; // sum[i] 는 i번째 수 까지의 합
    }

    for(int i = 1; i <= N; i++){ 
        sum[i] %= M; //sum[i]를 M으로 나눈 나머지
        if(sum[i] == 0){
            count++; //나머지가 0이면 더해준다. 
        }
    }
    for(int i = 0; i < M; i++){ //나머지가 i 일때 (0에서 M-1까지)
        long long int combo = 0;
        for(int j = 1; j <= N; j++){
            if(sum[j]==i){
                combo++;
            }
        }
        count += (combo * (combo-1) / 2);
    }
    cout << count;
}