#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main()
{
    string Alex = "Voina";
    Book Voinaimir(1444, "Voina_i_mir", "Poet");
    Voinaimir.Set_Book_Name(Alex);

    cout << "Include Poet_Name" << endl;
    cin >> Alex;
    Voinaimir.Set_Author(Alex);

    Voinaimir.Set_CountPage(-23);// Пример отрицательного значения стр

    int A = Voinaimir.Get_CountPage();
    Voinaimir.Print();
    Book Lake(144, "Voina", "Poet");
    int Result;
    Result = { Voinaimir == Lake };// Пример перегрузки ==
        cout << Result;
}

