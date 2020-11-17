using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	const int k = 30;
	int m[k];
	for (int i = 0; i < 30; i++)
	{
		m[i] = rand() % 30 + (-10);
		cout << m[i] << " ";
	}
	cout << "\n";
	int min = m[0];
	int number;
	for (int i = 0; i < 30; i++)
	{
		if(m[i])
		{
			min = m[i];
			number = i;
		}
	}
	cout << "Наименьший элемент массива: " << min << "\n";
	cout << "Порядковый номер элемента: " << number << endl;
	return 0;
}