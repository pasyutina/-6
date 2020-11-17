using namespace std;
#include <iostream>

int main()
{
    int i, m[10]; 
    for (i = 0; i < 10; i++)
    {
        cin >> m[i]; 
    }
    for (i = 0; i < 10; i++)
    {
        cout << "m[" << i << "]=" << m[i] << " "; 
    }
    system("pause");
    return 0;
}