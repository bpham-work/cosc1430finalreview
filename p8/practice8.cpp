#include <iostream>
using namespace std;

int nFibb(int n) {
    if (n == 1 || n == 2) return 1;
    return nFibb(n - 1) + nFibb(n - 2);

}

int main() {
    int input;
    cin >> input;
    int result = nFibb(input);
    cout << result << endl;
    return 0;
}
