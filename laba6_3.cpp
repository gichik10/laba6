#include <iostream>
using namespace std;
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    int a = 41;
    int b = 30;
    cout << "max number: " << max(a, b);
    return 0;
}