#include <iostream>


using namespace std;

int main() {
    double r, angle;
    const double PI = 3.1415926;

    // Ввод радиуса с проверкой
    do {
        cout << "Введите радиус окружности (положительное число): ";
        cin >> r;

        if (r <= 0) {
            cout << "Ошибка! Радиус должен быть больше 0.\n";
        }
    } while (r <= 0);

    // Ввод угла с проверкой
    do {
        cout << "Введите угол сектора (от 0 до 360 градусов): ";
        cin >> angle;

        if (angle < 0 || angle > 360) {
            cout << "Ошибка! Угол должен быть в диапазоне от 0 до 360.\n";
        }
    } while (angle < 0 || angle > 360);


    double length = 2 * PI * r;
    double area = PI * r * r;
    double sector_area = (PI * r * r * angle) / 360;

    // Результаты 
    cout << "\nДлина окружности: " << length << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Площадь сектора: " << sector_area << endl;

    return 0;
}
