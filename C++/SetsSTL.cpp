#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    // 1 - add an element
    // 2 - delete an element
    // 3 - find an element
    int queries;
    cin >> queries;
    for(int i = 0; i < queries; ++i) {
        int query;
        int num;
        cin >> query >> num;
        if(query == 1) s.insert(num);
        else if(query == 2) {
            auto itr = s.find(num);
            if(itr != s.end()) s.erase(num); // found it
        }
        else {
            auto itr = s.find(num);
            if(itr != s.end()) cout << "Yes";
            else cout << "No";
            cout << "\n";
        }

    }
    return 0;
}