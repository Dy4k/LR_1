#include <iostream>
#include <cmath>

using namespace std;

double perimeter(double a, double b) {
    return 2 * (a + b);
}

double area(double a, double b) {
    return a * b;
}

double diagonal(double a, double b) {
    return sqrt(a * a + b * b);
}

// проверка на положительное число
double inputPositive() {
    double x;
    do {
        cin >> x;
        if (x <= 0) {
            cout << "Введите положительное число: ";
        }
    } while (x <= 0);
    return x;
}

int main() {
    double a, b;

    cout << "Введите a: ";
    a = inputPositive();

    cout << "Введите b: ";
    b = inputPositive();
    
    cout << "\nПериметр: " << perimeter(a, b) << endl;
    cout << "Площадь: " << area(a, b) << endl;
    cout << "Диагональ: " << diagonal(a, b) << endl;

    return 0;
}
