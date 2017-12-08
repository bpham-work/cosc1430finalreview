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
    FindMinMax<double> obj2(1.0, 1.1, 1.2, 1.3, 1.4, 1.5);
    FindMinMax<float> obj3(0.1, 0.2, 0.3, 0.4, 0.5, 0.6);
    FindMinMax<char> obj4('a', 'b', 'c', 'd', 'e', 'f');
    obj.display();
    obj2.display();
    obj3.display();
    obj4.display();
    return 0;
}
