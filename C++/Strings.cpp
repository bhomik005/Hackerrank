#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1.length() << " " << s2.length() << "\n";
    string s3 = s1 + s2;
    cout << s3 << "\n";
    char temp;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2 << "\n";
    return 0;
}