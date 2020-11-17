#include <locale.h>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	const int k = 20;
	int m[k];
	for (int i = 0; i < 20; i++)
	{
		m[i] = rand() % 20;
		cout << m[i] << " ";
	}
	cout << "\n";
	int i;
	int p = 0;

	for (i = 0; i < k - 1; i++)
	{
		if (m[i] == m[i + 1])
		{
			p++;
		}
	}
	cout << "Количество пар: " << p << endl;
	return 0;
}