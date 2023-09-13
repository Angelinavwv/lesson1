//
// Created by angel on 13.09.2023.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // setlocale(LC_ALL, "");
    string in_string;

    // вывести литерал на терминал пользователя
    cout << "Введите свое имя, пожалуйста: ";

    // прочитать ответ пользователя в in_string
    cin >>  in_string;

    if ( in_string.empty() )
        // вывести сообщение об ошибке на терминал пользователя
        cerr << "ошибка: введенная строка пуста!\n";
    else cout << "Привет, " << in_string << "!\n";
}