using namespace std;
#include <ctime>
#include <iostream>

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
	int num1, num2;
	int max = m[0];
	int min = m[0];
	for (int i = 1; i < k; i++)
	{
		if (max < m[i])
		{
			max = m[i];
			num2 = i;
		}
		if (min > m[i])
		{
			min = m[i];
			num1 = i;
		}
	}
	cout << "Наименьший элемент: " << min << endl;
	cout << "Наибольший элемент: " << max << endl;

	for (int i = 0; i < k; i++)
	{
		m[num1] = m[num2];
		m[num2] = m[num1];
		cout << m[i] << " ";

	}
	return 0;
}