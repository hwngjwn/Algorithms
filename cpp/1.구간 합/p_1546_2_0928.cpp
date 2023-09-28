#include <iostream>
#include "string"
using namespace std;

int main(){
    int total_num;
    int A[1000];
    cin >> total_num;

    for (int i = 0; i < total_num; i++){
        cin >> A[i];
    }    
    int max = A[0];
    for(int i = 0; i < total_num; i++){
        if(max < A[i]){
            max = A[i];
        }
    }
    double sum = 0;
    for(int i = 0; i < total_num; i++){
        sum += static_cast<double>(A[i]) / max * 100;
    }
    cout << sum / total_num;
}