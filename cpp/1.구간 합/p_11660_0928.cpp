#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int num[1025][1025];
    for(int i = 0; i <= n; i++){
        if(i==0){
            for(int j = 0; j <= n; j++){
                num[i][j] = 0;
            }
        } else{
        for(int j = 0; j <= n; j++){
            if(j == 0){
                num[i][j] = 0;
            } else{
            int tmp;
            cin >> tmp;
            num[i][j] = num[i][j-1] + tmp;
            }
        }
        }
    }
    // cout <<'\n';

    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= n; j++){
    //         cout << num[i][j] <<' ';
    //     }
    //     cout << '\n';
    // }    
    for(int i = 1; i <= m; i++){
        int x1, y1, x2, y2;
        int sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        // cout <<'\n';

        for(int j = x1; j <= x2; j++){
            sum = sum + num[j][y2] - num[j][y1-1];
        }
        cout << sum << '\n';
    }


}