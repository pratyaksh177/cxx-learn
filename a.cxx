#include <iostream>
using namespace std;

int main()
{
    float N1, N2;
    char p;
    cin >> p;
    cin >> N1 >> N2;
    switch (p)
    {
    case '+':
        cout << N1 + N2;
        break;
    case '-':
        cout << N1 - N2;
        break;
    case '*':
        cout << N1 * N2;
        break;
    case '/':
        cout << N1 / N2;
        break;
    }
}