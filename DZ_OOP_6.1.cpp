
#include <iostream>

using namespace std; // для пулревеста

int main()
{
    int i;
    cout << "Enter int: ";
    
    while (!(cin >> i) || cin.get() != '\n')
    {
        cout << "Enter again !\n";
        cin.clear();
        cin.sync();
        cout << "Enter int: ";
    }
    
    return 0;
}

