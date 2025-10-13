#include <iostream>
#include <cmath>

using namespace std;

// виконання завдання Integer8, boolean13, Math32
int main()
{
    cout << "Integer8" << endl; // Integer8

    int twoDigit; // двозначне число
    int result; // кінцевий результат

    int number; // перша цифра
    int number2; // друга цифра

    cout << "Enter two-digit number: "; // просимо користувача ввести двозначне число
    cin >> twoDigit; // користувач вводить

    int i = twoDigit < 0 ? -1 : 1; // двозначне число відємне?

    // а там точно є цифри?
    if (twoDigit <= -100 || twoDigit >= 100)
        cout << "It's not two-digit number" << endl; // говоримо користувачу що він не правий
    else if ((twoDigit > -10 && twoDigit < 0) || (twoDigit < 10 && twoDigit > 0)) // якщо одна цифра за мість числа то перша цифра це нуль
        result = twoDigit * 10 * i; // додаємо нолик тим самим підтверджуємо що у початку був нуль а тепер він у кінці
    else // якщо це всеж таки двозначне число без нуля у початку
    {
        number = twoDigit % 10; // знайшли першу цифру
        number2 = twoDigit / 10 % 10; // знайшли другу

        result = number * 10 + number2 * i; // змінюємо містами
    }

    cout << result << endl; // виводимо кінечний результат

    cout << "boolean13" << endl; // boolean13

    int a, b, c; // оголошуємо змінні

    bool positiveOrNot = false; // результат після операції if

    cout << "Enter intagere a, b, c:" << endl; // просимо користувача ввести число/цифри
    cin >> a; //
    cin >> b; // користувач вводе
    cin >> c; //

    if (a >= 0 && b >= 0 && c >= 0) // якщо хочаб одна цифра/число не відємні тоді це буде записано як true
        positiveOrNot = true;

    cout << positiveOrNot << endl; // результат виводимо у консоль

    cout << "Math32" << endl; // Math32

    double x; // змінна х

    cout << "Enter number: "; // просимо ввести номер
    cin >> x; // користувач вводе

    double y = (pow(sin(3*x+M_PI), 3) * pow(2, 1-x)/tan(abs(x)) * sin(18)) + 1/3 * log2(abs(x)); // формула у

    cout << y << endl; // виводимо у

    // закінчення программи
    system("pause");
    return 0;
}