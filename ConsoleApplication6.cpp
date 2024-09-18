
#include <iostream>
using namespace std;
//обравши директиву та пространсво у якому я буду працювати

int main()
{
    setlocale(LC_ALL, "RU");
    double A, P2, P3, P5, P10, P15;
    //Ввів змінні через double щоб можна було вводити цілі числа
    cout << "Введите число A :";
    cin >> A;
    P2 = A * A;
    P3 = A * A *A;
    P5 = A * A * A *A *A;
    P10 = A * A * A * A * A * A * A * A * A * A;
    P15 = A * A * A * A * A * A * A * A * A * A * A * A * A * A * A;
    //Код рахування ступеню з 2 по 15
    cout << "  А2 :" << P2 << endl;
    cout << "  А3 :" << P3 << endl;
    cout << "  А5 :" << P5 << endl;
    cout << "  А10 :" << P10 << endl;
    cout << "  А15 :" << P15 << endl;
    // Виведення на єкран результату

    return 0; 


}


