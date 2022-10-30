// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    for (int i = 2; i < a; i++) {
        if (a % i == 0) { // если число делится на i=2 - оно не простое
            cout << "No";

            return 0;
        }

        else
        {
            cout << "Yes";
        }
        return 0;
    }
}


