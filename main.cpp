#include <iostream>
#include <fstream>

using namespace std;

char Dictionary[10000][100];

int main() {
    setlocale(LC_ALL, "rus"); // Устанавливается использование русской локали
    int user_integer = 0; // Инициализуем переменную для числа вводимого пользователем
    fstream file;
    file.open("C:\\POS-Manager\\APPLIED-PROGRAMMING-Pluralize-task\\PluralizeDictionary.txt"); // Открываем поток чтения из файла со словарём плюрализованных значений
    if (file.is_open()) { // В случае успешного открытия файла - продолжаем выполнение программы
        for (int i = 0; !file.eof(); i++) { // Считываем словарь
            file.getline(Dictionary[i], 100);
        }
        cout << "Введите число для плюрализации: ";
        cin >> user_integer; // Пользователь вводит число для плюрализации
        if (user_integer == 0) { // Проверяем на ошибки ввода
            cout << "Вы ввели что-то отличное от положительного целого числа";
        } else {
            cout << "Ваше плюрализованное число: " << Dictionary[user_integer] << endl;
        }
    }
    else {
        cout << "Dictionary reading error" << endl;
    }
    system("pause");
    return 0;
}
