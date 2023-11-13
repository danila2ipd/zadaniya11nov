
#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "russian");

    char startStation, endStation;


    cout << "Введите начальную станцию (A, B, C, D, E): ";
    cin >> startStation;
    startStation = toupper(startStation);


    cout << "Введите конечную станцию (A, B, C, D, E): ";
    cin >> endStation;
    endStation = toupper(endStation);


    int travelTime;

    switch (startStation)
    {
    case 'a':
    case 'A':
        switch (endStation)
        {
        case 'a':
        case 'A':
            travelTime = 0;
            break;
        case 'b':
        case 'B':
            travelTime = 1;
            break;
        case 'c':
        case 'C':
            travelTime = 2;
            break;

        case 'd':
        case 'D':
            travelTime = 3;
            break;

        case 'e':
        case 'E':
            travelTime = 4;
            break;
        default:
            cout << "Некорректная конечная станция." << endl;
            return 1;
        }
        

    case 'b':
    case 'B':
        travelTime = 1;

        break;

    case 'c':
    case 'C':
        travelTime = 2;

        break;

    case 'd':
    case 'D':
        travelTime = 3;

        break;
    case 'e':
    case 'E':
        travelTime = 4;

        break;

    default:
        cout << "Некорректная начальная станция." << endl;
        return 1;
    }

    cout << "Время в пути: " << travelTime << " час(ов)." << endl;

    return 0;
}