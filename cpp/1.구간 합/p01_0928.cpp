#include <iostream>
#include <string>
using namespace std;

int main()
{
    int total_n;
    string input_str;
    int sum = 0;

    cin>>total_n;
    cin.ignore(32767,'\n');
    getline(cin, input_str);
    const char* charArray = input_str.c_str();
    // cout<<input_str.length()<<endl;
    for(int i=0; i<total_n; i++){
        // cout << "char : " << charArray[i] << " int : " << (int(charArray[i]) - '0') << endl; 
        sum += (int(charArray[i])-'0');
    }
    cout << sum << endl;
}