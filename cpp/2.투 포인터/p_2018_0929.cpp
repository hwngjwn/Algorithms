#include <iostream>
using namespace std;

int main(){
    int N, sum, count;
    count = 1;
    sum = 1;
    cin >> N;
    int start_index = 1;
    int end_index = 1;

    while(end_index != N){
        if(sum > N){
            sum -= start_index;
            start_index++;
        }
        else if(sum < N){
            end_index++;
            sum += end_index;
        }
        else if(sum == N){
            count++;
            end_index++;
            sum += end_index;
        }
    }
    cout << count;
}