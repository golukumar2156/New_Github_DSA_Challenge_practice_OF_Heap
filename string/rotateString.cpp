#include <iostream>
using namespace std;

int main() {
    string s1 = "sample";
    string s2 = "plesam";

    if (s1.size() != s2.size()) {
        cout << "false";
        return 0;
    }
    string l="hello";
    string t = s1;
    for (int i = 0; i < s1.size(); i++) {
        if (t == s2) {
            cout << "true";
            return 0;
        }
        // start:  testing purpose using
        string p=l.substr(1);
        cout << p << endl;
        // end
        t = t.substr(1) + t.substr(0, 1);
        cout << t << endl;
    }
    cout << "false";

    return 0;
}