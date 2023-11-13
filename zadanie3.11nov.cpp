
#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "russian");
    const int Maxsize = 10;
    int array[Maxsize] = { 1, 2, 3, -4, -5, -6, 7, 8, 9, 10 };

    int newSize = 0;

    
    for (int i = 0; i < Maxsize; ++i) {
        if (array[i] >= 0) {
            array[newSize] = array[i];
            ++newSize;
        }
    }

    
    for (int i = newSize; i < Maxsize; ++i) {
        array[i] = 0;
    }

    
    cout << "Массив после удаления отрицательных элементов:" << endl;
    for (int i = 0; i < Maxsize; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
  






