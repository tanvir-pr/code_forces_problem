#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> unique_chars(username.begin(), username.end()); // Store unique characters

    // Check if the count is even or odd
    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
