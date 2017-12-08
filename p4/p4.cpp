#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

void modifyCharacter(char letters[], int size) {
    for (int i = 0; i < size; i++) {
        if (letters[i] % 3 == 0) {
            letters[i] += 3;
        } else if (letters[i] % 2 == 0) {
            letters[i] += 2;
        } else {
            letters[i] += 1;
        }
    }
}

void print(char letters[], int size) {
    for (int i = 0; i < size; i++) {
        cout << letters[i] << " ";
    }
    cout << endl;
}

void writeFile(char letters[], int size) {
    ofstream out;
    out.open("new.txt");
    for (int i = 0; i < size; i++) {
        out << letters[i] << " ";
    }
    out.close();
}

int main() {
    try {
        char letters[15];
        ifstream in;
        in.open("example.txt");
        string z;
        int counter = 0;
        for (int i = 0; i < 3; i++) {
            getline(in, z);
            for (int k = 0; k < z.size(); k++) {
                letters[counter++] = z[k];
            }
        }
        modifyCharacter(letters, 15);
        print(letters, 15);
        writeFile(letters, 15);
        in.close();
    } catch (exception &e) {
        cout << "Exception!!" << endl;
    }
}
