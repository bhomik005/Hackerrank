#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> v;
    int num;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin >> x;
    // erase the xth position from the vector
    v.erase(v.begin() + x - 1);

    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << "\n";  // prints the length of the vector(dynamic array)
    for(int i = 0; i < v.size(); ++i) cout << v[i] << " ";
    return 0;
}
