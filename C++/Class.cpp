#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    int get_age() {
        return age;
    }
    void set_age(int a) {
        age = a;
    }
    string get_first_name() {
        return first_name;
    }
    void set_first_name(string name){
        first_name = name;
    }
    string get_last_name() {
        return last_name;
    }
    void set_last_name(string name) {
        last_name = name;
    }
    int get_standard() {
        return standard;
    }
    void set_standard(int s) {
        standard = s;
    }
    string to_string() {
        char ch = ',';
        // wohoo! that's how we can use stringstreams - pretty straightforward right!
        stringstream ss;
        ss << age << ch << first_name << ch << last_name << ch << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}