#include <iostream>
#include <Windows.h>
using namespace std;

int arrSum(int* first, int* last) {
    int sum = 0;
    for (int* pointer = first; pointer < last; pointer++) {
        sum += *pointer;
    }
    return sum;
}

int sum(int a, int b) {
    return a + b;
}
int dif(int a, int b) {
    return a - b;
}

int (*operationType(char sType))(int,int) {
    if (sType == '+') {
        return sum;
    } else if (sType == '-') {
        return dif;
    } else {
        cout << "wrong symbol (+/-)";
    }
}

int main() {
    int m[] = { 2,4,8,12 };
    cout << arrSum(begin(m),end(m));
    cout << "\n\n";
    int (*test)(int, int);
    test = operationType('+');
    cout << test(10, 20) << endl;
    test = operationType('-');
    cout << test(10, 20);
    cout << "\n\n";
    float* re = new float(21.11f);
    cout << *re << endl;
    delete re;
}