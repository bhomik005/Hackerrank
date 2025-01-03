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
    vector<int> nums;
    int num;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end()); // O(n log n)
    for(int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    return 0;
}
