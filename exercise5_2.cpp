#include <iostream>
using namespace std;

int main(){
    string text1, text2;
    int N, count = 0;
    cout << "Enter the first text: ";
    cin >> text1;
    cout << "Enter the second text: ";
    cin >> text2;
    cout << "Enter N: ";
    cin >> N;
    
    while(count < N/2){
        string text = "";
        text = text+text1+text2;
        count++;
    }
    return 0;
}