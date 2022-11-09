#include <iostream>
#include <math.h>

using namespace std;

void SpeedTrain(float s, float t)
{
    float v;

    // вычесляем скорость в м/с
    v = s / (t * 60);

    // выводим число с 3 знаками после запятой и переводим м/с в км/ч
    cout << round(v * 1000) / 1000 << " м/с" << endl
         << round((v * 3.6) * 1000) / 1000 << " км/ч" << endl;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");

    float space, times;

    // вводим ратсояние прохождения
    cout << "Введите растояние которое проходит поезд (метр): ";
    cin >> space;

    // вводим время
    cout << "Введите время за которое он проходит данное растояние (минуты): ";
    cin >> times;

    // передаём параметры в функцию
    SpeedTrain(space, times);

    return 0;
}