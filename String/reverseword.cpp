#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reverseWordsInplace(string str) {
    reverse(str.begin(), str.end());

    int start = 0;
    int end = 0;
    while (end < str.length()) {
        if (str[end] == ' ') {
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1;
        }
        end++;
    }
    reverse(str.begin() + start, str.begin() + end);
}

int main() {
    string input = "Hello World! How are you?";
    reverseWordsInplace(input);
    cout << input << std::endl;
    return 0;
}
