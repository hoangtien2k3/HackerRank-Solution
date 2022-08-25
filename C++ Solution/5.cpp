#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> vt;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        vt.push_back(x);
    }
    
    sort(vt.begin(), vt.end());
    
    for(int i =0; i <n; i++) {
        cout << vt[i] << " ";
    }
    
    return 0;
}

