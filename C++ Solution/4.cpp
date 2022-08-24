
// For Loop
// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    string str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(i <= 9) {
            cout << str[i-1] << endl;
        } else {
            cout << str[9 + (i % 2)] << endl;
        }
    }
    
    return 0;
}