#include <iostream>
#include<string>
using namespace std;
void greeting(string name) {
    cout << "Hello," << name << endl;
}
int main()
{
    string name1 = "Misha";
    string name2 = "Vova";
    string name3 = "Dima";
    greeting(name1);
    greeting(name2);
    greeting(name3);
    return 0;
}