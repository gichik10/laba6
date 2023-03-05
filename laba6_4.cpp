#include <iostream>
using namespace std;
bool isPositive(int a) {
    if (a >= 0) {
        return true;
    }
     else {
         return false;
     }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int b;
    cout << "Введите число:";
    cin >> b;
    b = isPositive(b);
    cout << b;
    return 0;
}