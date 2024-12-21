#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // string stream can be helpful in string parsing
    // << inserts the formatted data
    // >> extracts the formatted data
    vector<int> parsedIntegers;
    stringstream ss(str);
    char ch;
    int temp;
    while(ss >> temp){
        parsedIntegers.push_back(temp);
        ss >> ch;
    }
    return parsedIntegers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
