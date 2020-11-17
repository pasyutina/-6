using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    const int a = 10;
    int m[a] = {};

    for (int i = 0; i <= 20; i++)
    {
        m[i] = rand() % 20 + (-10);
        cout << m[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i <= 20; i++)
    {
        if (m[i] < 0)
        {
            m[i] = 0;
        }
    }
    return 0;
}
