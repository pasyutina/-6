using namespace std;
#include <iostream>

int main()
{
    int i, m[100];
    for (i = 0; i < 100; i++)
    {
        cin >> m[i];
    }
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += m[i];
    }
    cout << sum;
}