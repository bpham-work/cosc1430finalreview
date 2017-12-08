#include <iostream>
using namespace std;

template <class T>
class FindMinMax {
    T arr[6];
    private:
        T findMin();
        T findMax() {
            T max = arr[0];
            for (int i = 0; i < 6; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            return max;
        }

    public:
        FindMinMax() {}
        FindMinMax(T a, T b, T c, T d, T e, T f) {
            arr[0] = a;
            arr[1] = b;
            arr[2] = c;
            arr[3] = d;
            arr[4] = e;
            arr[5] = f;
        }
        void display();
};

template <class T>
T FindMinMax<T>::findMin() {
    T min = arr[0];
    for (int i = 0; i < 6; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

template <class T>
void FindMinMax<T>::display() {
    cout << "Min: " << findMin() << endl;
    cout << "Max: " << findMax() << endl;
}

int main() {
    FindMinMax<int> obj(1, 2, 3, 4, 5, 6);
    obj.display();
    return 0;
}
