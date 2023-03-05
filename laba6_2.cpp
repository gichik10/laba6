#include <iostream>
using namespace std;
int square(int a) {
    return a * a;
}
int main()
{
    int a1 = 4;
    int a2 = 2;
    int a3 = 2302;
    cout << "Square of " << a1 << " = " << square(a1) << std::endl;
    cout << "Square of " << a2 << " = " << square(a2) << std::endl;
    cout << "Square of " << a3 << " = " << square(a3) << std::endl;
    return 0;
}
