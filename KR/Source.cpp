#include <iostream>
using namespace std;
void createMassive(int** massive, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		massive[i] = new int[cols]; // ???
	}
}
void fillMassive(int** massive, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int multiple;
			if (rand() % 10 > 5)
			{
				multiple = 1;
			}
			else
			{
				multiple = -1;
			}
			massive[i][j] = rand() % 10 * multiple;
		}
	}
}
void showMassive(int** massive, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << massive[i][j] << endl;
		}
	}
}
int averageValueOfEvenNumbers(int** massive, int rows, int cols)
{
	int averageValueOfEvenNumbers = 0;
	int countOfAmount1 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (massive[i][j] % 2 == 0)
			{
				countOfAmount1++;
				averageValueOfEvenNumbers += massive[i][j] / countOfAmount1;
			}
		}
	}
	return averageValueOfEvenNumbers;
}
int averageValueOfOddNumbers(int** massive, int rows, int cols)
{
	int averageValueOfOddNumbers = 0;
	int countOfAmount2 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (massive[i][j] % 2 == 1)
			{
				countOfAmount2++;
				averageValueOfOddNumbers += massive[i][j] / countOfAmount2++;;
			}
		}
	}
	return averageValueOfOddNumbers;
}
void replacementOfSignsOfElementsFirstLine(int** massive, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		massive[0][i] = -massive[0][i];
	}
}
void deleteMassive(int** massive, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		delete[]massive[i];
	}
	delete[]massive;
}
void fillStaticMassive(int massive[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int multiple2;
			if (rand() % 10 > 5)
			{
				multiple2 = 1;
			}
			else
			{
				multiple2 = -1;
			}
			massive[i][j] = rand() % 10 * multiple2;
		}
	}
}
void showStaticMassive(int massive[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << massive[i][j] << " ";
		}
	}
}
int averageValueOfEvenNumbersStatic(int massive[][10], int rows, int cols)
{
	int averageValueOfEvenNumbers = 0;
	int countOfAmount1 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (massive[i][j] % 2 == 0)
			{
				countOfAmount1++;
				averageValueOfEvenNumbers += massive[i][j] / countOfAmount1;
			}
		}
	}
	return averageValueOfEvenNumbers;
}
int averageValueOfOddNumbersStatic(int massive[][10], int rows, int cols)
{
	int averageValueOfOddNumbers = 0;
	int countOfAmount2 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (massive[i][j] % 2 == 1)
			{
				countOfAmount2++;
				averageValueOfOddNumbers += massive[i][j] / countOfAmount2++;;
			}
		}
	}
	return averageValueOfOddNumbers;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int rows;
	int cols;
	cout << "¬ведите количество строк: ";
	cin >> rows;
	cout << "¬ведите количество столбцов: ";
	cin >> cols;
	void createMassive(int rows, int cols);
	void fillMassive(int** massive, int rows, int cols);
	cout << "ћассив чисел: " << endl;
	void showMassive(int** massive, int rows, int cols);
	void deleteMassive(int** massive, int rows, int cols);
	void fillStaticMassive(int massive[][10], int rows, int cols);
	void showStaticMassive(int massive[][10], int rows, int cols);
	cout << "—реднее значение парных чисел динамического массива: " <<  << endl; // якусь зм≥нну треба, через €ку ми виразимо функц≥ю?
	cout << "—реднее значение непарных чисел динамического массива: " << << endl; // якусь зм≥нну треба, через €ку ми виразимо функц≥ю?
	cout << "—реднее значение парных чисел статического массива: " << << endl; // якусь зм≥нну треба, через €ку ми виразимо функц≥ю?
	cout << "—реднее значение непарных чисел статического массива: " << << endl; // якусь зм≥нну треба, через €ку ми виразимо функц≥ю?
	return 0;
}