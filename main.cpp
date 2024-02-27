#include <iostream>
#include <vector> 
#include <stdlib.h>

using namespace std;

int main()

{
    system("chcp 1251 > NUL");

    int N = 9; //размер вектора
    int i, j;
    vector < vector <int> > Table;
    //в цикле добавляем элементы через метод push_back класса vector  значениями произведения чисел
    for (i = 0; i < N; i++)
    {
        Table.push_back(vector<int>());
        for (j = 0; j < N; j++)
            Table[i].push_back((i + 1) * (j + 1));
    }
    cout << "Таблица умножения!" << endl;
    cout << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 1; j < N; j++)
            cout << (j + 1) << '*' << (i + 1) << '=' << Table[i][j] << '\t';
        if (j == 4)cout << endl;
        cout << endl;
    }
}