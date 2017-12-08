#include <iostream>
using namespace std;

void printForwards(int arr[], int max, int current) {
    if (current > max) {
        cout << endl;
        return;
    }
    cout << arr[current] << " ";
    printForwards(arr, max, ++current);
}

void printBackwards(int arr[], int current) {
    if (current < 0) {
        cout << endl;
        return;
    }
    cout << arr[current] << " ";
    printBackwards(arr, --current);
}

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10  };
    printForwards(arr, 9, 0);
    printBackwards(arr, 9);
}
