#include <iostream> 
#include <cmath> 
int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, c, x1, x2, D;
    x1 = 0;
    x2 = 0;
    std::cout << "Введите коэффициенты квадратного уравнения:";
    std::cin >> a >> b >> c;

    // все переменные являются нулями

    if (a == 0 && b == 0 && c == 0) std::cout << "X - любое число";

    // две переменных произвольные, третья является нулем

    if (((c == 0 && b == 0) && a != 0) || ((c == 0 && a == 0) && b != 0)) {
        std::cout << "X = 0";
    }
    else if (((a == 0 && b == 0) && c != 0)) {
        std::cout << "Уравнение не имеет корней";
    }

    // одна переменная ноль, другие произвольные

    if ((b != 0 && c != 0) && a == 0) {
        x1 = (-c) / b;
        std::cout << x1;
    }
    if ((a != 0 && c != 0) && b == 0) {
        if (c <= 0) {
            x2 = sqrt((-c) / a);
            std::cout << x2 << " " << -x2;
        }
        else {
            std::cout << "Не имеем корней";
        }
    }
    if ((a != 0 && b != 0) && c == 0) {
        x1 = 0;
        x2 = (-b) / a;
        std::cout << x1 << " и " << x2;
    }

    // все переменные произвольные

    if (a != 0 && b != 0 && c != 0) {
        D = b * b - 4 * a * c;
        if (D > 0) {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            std::cout << x1 << " " << x2;
        }
        else if (D == 0) {
            x1 = (-b) / 2 * a;
            std::cout << x1;
        }
        else {
            std::cout << "корней нет";
        }
    }


    return 0;

}