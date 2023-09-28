#include <iostream>
#include <string>
using namespace std;

int findmax(int A[], int size);
double newAverage(int A[], int size, int max);

int findmax(int A[], int size){
    int max = A[0];
    for(int i = 0; i < size; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

double newAverage(int A[], int size, int max){
    double average = 0;
    for(int i = 0; i < size; i++){
        average += static_cast<double>(A[i]) / static_cast<double>(max) * 100;
        cout << average << endl;
    }
    average /= size;
    return average;
}

int main()
{
    int total_num = 0;
    string input_str;
    int input_num = 0;
    int count = 0;

    cin >> total_num;
    int scores[total_num];

    cin.ignore(32767,'\n');
    getline(cin, input_str);

    for(int i = 0; i < input_str.size(); i++){
        if(input_str[i]==' '){
            scores[count] = input_num;
            count++;
            input_num = 0;
        }
        else if(i == input_str.size() - 1){
            input_num *= 10;
            input_num += (input_str[i] - '0');             
            scores[count] = input_num;
        }
        else if(input_str[i]<='9' && input_str[i] >='0'){
            input_num *= 10;
            input_num += (input_str[i] - '0'); 
        }
    }

    int max = findmax(scores, total_num);
    cout << newAverage(scores, total_num, max);
    return 0;
}