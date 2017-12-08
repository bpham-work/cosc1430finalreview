#include <iostream>
#include <string>
#include <string.h>
using namespace std;

bool isPalindrome(string str, int left, int right) {
    if (left > right) {
        return true;
    }
    if (str[left] != str[right]) {
        return false;
    }
    return isPalindrome(str, ++left, --right);
}

int main() {
    string str = "racecar";
    bool result = isPalindrome(str, 0, strlen(str.c_str())-1);
    cout << str << endl;
    cout << result << endl;
    return 0;
}
