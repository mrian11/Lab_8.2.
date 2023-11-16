#include <iostream>
#include <string>

using namespace std;

// Function to find and delete substrings between '(' and ')'
string deleteBetween(string& s) {
    size_t start = s.find('(');
    size_t end = s.rfind(')');

    while (start != string::npos && end != string::npos && start < end) {
        s.erase(start, end - start + 1); // Erase everything between '(' and ')'

        // Find the next pair of parentheses
        start = s.find('(');
        end = s.rfind(')');
    }

    return s;
}

int main() {
    cout << "Add S:";
    string S;
    getline(cin, S);

    cout <<"Result:"<< deleteBetween(S) << endl;

    return 0;
}
