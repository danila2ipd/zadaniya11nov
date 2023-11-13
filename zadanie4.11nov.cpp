
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    double a = 3.0, b = -4.0, c = 9.0;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "У уравнения есть два корня:" << endl;
        cout << "Корень 1: " << root1 << endl;
        cout << "Корень 2: " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);

        cout << "У уравнения есть один корень:" << endl;
        cout << "Корень: " << root << endl;
    }
    else {
        cout << "У уравнения нет действительных корней." << endl;
    }

    return 0;
}