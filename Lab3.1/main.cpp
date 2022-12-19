#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* pointerA = &a;
    cout << "pointerA = " << pointerA << endl;
    cout << "*pointerA = " << *pointerA << endl;
    *pointerA = 20;
    cout << "a = " << a << endl;
    cout << "\n";
    int array[] = {4, 2, 5, 6, 9};
    for (int* pointer = &array[0]; pointer <= &array[3]; pointer++) {
        cout << *pointer << " ";
    }
    cout << "\n";
    int b = 5;
    int* const pointerB = &b;
    cout << "pointerB = " << pointerB << endl;
    cout << "*pointerB = " << *pointerB << endl;
    //pointerB = &a; <ошибка>
    *pointerB = 15;
    cout << "*pointerB = " << *pointerB << endl;
}
