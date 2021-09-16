#include <iostream>
#include <fstream>

using namespace std;

char Dictionary[10000][100];

int main() {
    setlocale(LC_ALL, "rus");
    int user_integer = 0;
    fstream file;
    file.open("C:\\Users\\kisel\\CLionProjects\\Pluralize\\cmake-build-debug\\PluralizeDictionary.txt");
    if (file.is_open()) {
        for (int i = 0; !file.eof(); i++) {
            file.getline(Dictionary[i], 100);
        }
        cout << "Введите число для плюрализации: ";
        cin >> user_integer;
        cout << "Ваше плюрализованное число: " << Dictionary[user_integer] << endl;
    }
    else {
        cout << "Dictionary reading error" << endl;
    }
    system("pause");
    return 0;
}
