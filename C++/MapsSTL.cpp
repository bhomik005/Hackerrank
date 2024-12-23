#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int queries;
    cin >> queries;
    string name;
    int marks;
    map<string,int> m;
    // 1 -> add the marks Y who name is X
    // 2 -> erase the marks of the students who name is X
    // 3 -> Print the marks of the students whose name is X
    for(int i = 0; i < queries; ++i) {
        int query;
        cin >> query;
        if(query == 1) {
            cin >> name >> marks;
            auto itr = m.find(name);
            if(itr != m.end()) m[name] += marks;
            else m[name] = marks;
        }
        else if(query == 2) {
            cin >> name;
            m.erase(name);
        }
        else {
            cin >> name;
            auto itr = m.find(name);
            if(itr != m.end() && m[name] > 0) cout << m[name] << "\n";
            else cout << 0 << "\n";
        }
    }
    return 0;
}
