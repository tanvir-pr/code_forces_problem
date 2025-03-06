#include <iostream>
#include <cctype> // For toupper()
using namespace std;

int main() {
    string word;
    cin >> word;

    word[0] = toupper(word[0]); // Convert first letter to uppercase

    cout << word << endl;

    return 0;
}
