
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    int numPosit;
    cout << "Введите количество посетителей спортзала за день: ";
    cin >> numPosit;

    int minAge, maxAge, totalAge = 0;
    cout << "Введите возраст каждого посетителя:" << endl;

    for (int i = 0; i < numPosit; i++) {
        int age;
        cout << "Посетитель " << (i + 1) << ": ";
        cin >> age;

        if (i == 0) {
            minAge = maxAge = age;
        }
        else {
            if (age < minAge) {
                minAge = age;
            }
            if (age > maxAge) {
                maxAge = age;
            }
        }

        totalAge += age;
    }

    double averageAge = static_cast<double>(totalAge) / numPosit;

    cout << "Самый молодой возраст: " << minAge << " лет" << endl;
    cout << "Самый старший возраст: " << maxAge << " лет" << endl;
    cout << "Средний возраст посетителей: " << averageAge << " лет" << endl;

    return 0;
}




