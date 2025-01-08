#include <iostream>
#include <string>
using namespace std;
void reverseString(string &str) {
    int st = 0, end = str.size() - 1;
    while (st <= end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
}

int main() {
    string str = "Deepak jawels";
    cout << "Original String: " << str << endl;
    cout << "Size of String: " << str.size() << endl;

    reverseString(str);

    cout << "Reversed String: " << str << endl;
    return 0;
}

