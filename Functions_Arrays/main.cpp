#include<iostream>
using namespace std;

const int ROWS = 4, COLS = 4;

void FillRand(int Arr[], const int SIZE);
void FillRand(float Arr[], int SIZE);
void FillRand(double Arr[], int SIZE);
void FillRand(char Arr[], int SIZE);

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], int SIZE);
void Print(float Arr[], int SIZE);
void Print(double Arr[], int SIZE);
void Print(char Arr[], int SIZE);

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int Arr[], int SIZE);
float Sum(float Arr[], int SIZE);
double Sum(double Arr[], int SIZE);
//char Sum(char Arr[], int SIZE);

int Sum(int Arr[ROWS][COLS], int ROWS, int COLS);
float Sum(float Arr[ROWS][COLS], int ROWS, int COLS);
double Sum(double Arr[ROWS][COLS], int ROWS, int COLS);

double Avg(int Arr[], int SIZE);
double Avg(float Arr[], int SIZE);
double Avg(double Arr[], int SIZE);
//char Avg(char Arr[], int SIZE);

double Avg(int Arr[ROWS][COLS], int ROWS, int COLS);
double Avg(float Arr[ROWS][COLS], int ROWS, int COLS);
double Avg(double Arr[ROWS][COLS], int ROWS, int COLS);

int minValueIn(int Arr[], int SIZE);
float minValueIn(float Arr[], int SIZE);
double minValueIn(double Arr[], int SIZE);
char minValueIn(char Arr[], int SIZE);

int minValueIn(int Arr[ROWS][COLS], int ROWS, int COLS);
float minValueIn(float Arr[ROWS][COLS], int ROWS, int COLS);
double minValueIn(double Arr[ROWS][COLS], int ROWS, int COLS);
char minValueIn(char Arr[ROWS][COLS], int ROWS, int COLS);

int maxValueIn(int Arr[], int SIZE);
float maxValueIn(float Arr[], int SIZE);
double maxValueIn(double Arr[], int SIZE);
char maxValueIn(char Arr[], int SIZE);

int maxValueIn(int Arr[ROWS][COLS], int ROWS, int COLS);
float maxValueIn(float Arr[ROWS][COLS], int ROWS, int COLS);
double maxValueIn(double Arr[ROWS][COLS], int ROWS, int COLS);
char maxValueIn(char Arr[ROWS][COLS], int ROWS, int COLS);

void shiftLeft(int Arr[], int SIZE, int num_of_elements);
void shiftLeft(float Arr[], int SIZE, int num_of_elements);
void shiftLeft(double Arr[], int SIZE, int num_of_elements);
void shiftLeft(char Arr[], int SIZE, int num_of_elements);

void shiftLeft(int Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftLeft(float Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftLeft(double Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftLeft(char Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);

void shiftRight(int Arr[], int SIZE, int num_of_elements);
void shiftRight(float Arr[], int SIZE, int num_of_elements);
void shiftRight(double Arr[], int SIZE, int num_of_elements);
void shiftRight(char Arr[], int SIZE, int num_of_elements);

void shiftRight(int Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftRight(float Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftRight(double Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);
void shiftRight(char Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements);

void Sort(int Arr[], int SIZE);
void Sort(float Arr[], int SIZE);
void Sort(double Arr[], int SIZE);
void Sort(char Arr[], int SIZE);

void Sort(int Arr[ROWS][COLS], int ROWS, int COLS);
void Sort(float Arr[ROWS][COLS], int ROWS, int COLS);
void Sort(double Arr[ROWS][COLS], int ROWS, int COLS);
void Sort(char Arr[ROWS][COLS], int ROWS, int COLS);

void main()
{
	setlocale(LC_ALL, "");

	cout << "\t*Работа с массивами*" << endl << endl;
	const int SIZE = 8;

	cout << "Заполнение массива случайными числами типа int:" << endl;
	int intArray[SIZE];
	FillRand(intArray, SIZE);
	Print(intArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение двумерного массива случайными числами типа int:" << endl;
	int intArray2[ROWS][COLS];
	FillRand(intArray2, ROWS, COLS);
	Print(intArray2, ROWS, COLS);
	cout << endl << endl;

	cout << "Заполнение массива случайными числами типа float: " << endl;
	float fArray[SIZE];
	FillRand(fArray, SIZE);
	Print(fArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение двумерного массива случайными числами типа float:" << endl;
	float fArray2[ROWS][COLS];
	FillRand(fArray2, ROWS, COLS);
	Print(fArray2, ROWS, COLS);
	cout << endl << endl;

	cout << "Заполнение массива случайными числами типа double: " << endl;
	double dArray[SIZE];
	FillRand(dArray, SIZE);
	Print(dArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение двумерного массива случайными числами типа double:" << endl;
	double dArray2[ROWS][COLS];
	FillRand(dArray2, ROWS, COLS);
	Print(dArray2, ROWS, COLS);
	cout << endl << endl;

	cout << "Заполнение массива случайными числами типа char: " << endl;
	char chArray[SIZE];
	FillRand(chArray, SIZE);
	Print(chArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение двумерного массива случайными числами типа char:" << endl;
	char chArray2[ROWS][COLS];
	FillRand(chArray2, ROWS, COLS);
	Print(chArray2, ROWS, COLS);
	cout << endl << endl;

	cout << "Сумма элементов массивов: " << endl;
	cout << "Массив с элементами типа int - " << Sum(intArray, SIZE) << endl;
	cout << "Двумерный массив с элементами типа int - " << Sum(intArray2, ROWS, COLS) << endl;
	cout << "Массив с элементами типа float - " << Sum(fArray, SIZE) << endl;
	cout << "Двумерный массив с элементами типа float - " << Sum(fArray2, ROWS, COLS) << endl;
	cout << "Массив с элементами типа double - " << Sum(dArray, SIZE) << endl;
	cout << "Двумерный массив с элементами типа double - " << Sum(dArray2, ROWS, COLS) << endl;
	//cout << "Массив с элементами типа char - " << Sum(chArray, SIZE) << endl;
	cout << endl;

	cout << "Среднее значение элементов массивов: " << endl;
	cout << "Среднее значение элементов массива типа int - " << Avg(intArray, SIZE) << endl;
	cout << "Среднее значение элементов двумерного массива типа int - " << Avg(intArray2, ROWS, COLS) << endl;
	cout << "Среднее значение элементов массива типа float - " << Avg(fArray, SIZE) << endl;
	cout << "Среднее значение элементов двумерного массива типа float - " << Avg(fArray2, ROWS, COLS) << endl;
	cout << "Среднее значение элементов массива типа double - " << Avg(dArray, SIZE) << endl;
	cout << "Среднее значение элементов двумерного массива типа double - " << Avg(dArray2, ROWS, COLS) << endl;
	//cout << "Среднее значение массива с элементами типа char - " << Avg(chArray, SIZE) << endl;
	cout << endl;

	cout << "Минимальное значение элементов массивов: " << endl;
	cout << "Минимальное значение массива с элементами типа int - " << minValueIn(intArray, SIZE) << endl;
	cout << "Минимальное значение двумерного массива с элементами типа int - " << minValueIn(intArray2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива с элементами типа float - " << minValueIn(fArray, SIZE) << endl;
	cout << "Минимальное значение двумерного массива с элементами типа float - " << minValueIn(fArray2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива с элементами типа double - " << minValueIn(dArray, SIZE) << endl;
	cout << "Минимальное значение двумерного массива с элементами типа double - " << minValueIn(dArray2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива с элементами типа char - " << minValueIn(chArray, SIZE) << endl;
	cout << "Минимальное значение двумерного массива с элементами типа char - " << minValueIn(chArray2, ROWS, COLS) << endl;
	cout << endl;

	cout << "Максимальное значение элементов массивов: " << endl;
	cout << "Максимальное значение массива с элементами типа int - " << maxValueIn(intArray, SIZE) << endl;
	cout << "Максимальное значение двумерного массива с элементами типа int - " << maxValueIn(intArray2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива с элементами типа float - " << maxValueIn(fArray, SIZE) << endl;
	cout << "Максимальное значение двумерного массива с элементами типа float - " << maxValueIn(fArray2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива с элементами типа double - " << maxValueIn(dArray, SIZE) << endl;
	cout << "Максимальное значение двумерного массива с элементами типа double - " << maxValueIn(dArray2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива с элементами типа char - " << maxValueIn(chArray, SIZE) << endl;
	cout << "Максимальное значение двумерного массива с элементами типа char - " << maxValueIn(chArray2, ROWS, COLS) << endl;
	cout << endl;

	int elem_num;
	cout << "Количество элементов сдвига массивов влево: "; cin >> elem_num;
	cout << endl << endl;

	cout << "Сдвиг элементов влево:" << endl;
	shiftLeft(intArray, SIZE, elem_num);
	Print(intArray, SIZE); cout << endl << endl;
	shiftLeft(fArray, SIZE, elem_num);
	Print(fArray, SIZE); cout << endl << endl;
	shiftLeft(dArray, SIZE, elem_num);
	Print(dArray, SIZE); cout << endl << endl;
	shiftLeft(chArray, SIZE, elem_num);
	Print(chArray, SIZE); cout << endl << endl;
	cout << endl;

	cout << "Сдвиг элементов влево двумерных массивов: " << endl;
	shiftLeft(intArray2, ROWS, COLS, elem_num);
	Print(intArray2, ROWS, COLS); cout << endl << endl;
	shiftLeft(fArray2, ROWS, COLS, elem_num);
	Print(fArray2, ROWS, COLS); cout << endl << endl;
	shiftLeft(dArray2, ROWS, COLS, elem_num);
	Print(dArray2, ROWS, COLS); cout << endl << endl;
	shiftLeft(chArray2, ROWS, COLS, elem_num);
	Print(chArray2, ROWS, COLS); cout << endl << endl;
	cout << endl;

	cout << "Количество элементов сдвига массивов вправо: "; cin >> elem_num;
	cout << endl << endl;

	cout << "Сдвиг элементов вправо: " << endl;
	shiftRight(intArray, SIZE, elem_num);
	Print(intArray, SIZE); cout << endl << endl;
	shiftRight(fArray, SIZE, elem_num);
	Print(fArray, SIZE); cout << endl << endl;
	shiftRight(dArray, SIZE, elem_num);
	Print(dArray, SIZE); cout << endl << endl;
	shiftRight(chArray, SIZE, elem_num);
	Print(chArray, SIZE); cout << endl << endl;
	cout << endl;

	cout << "Сдвиг элементов вправо двумерных массивов: " << endl;
	shiftRight(intArray2, ROWS, COLS, elem_num);
	Print(intArray2, ROWS, COLS); cout << endl << endl;
	shiftRight(fArray2, ROWS, COLS, elem_num);
	Print(fArray2, ROWS, COLS); cout << endl << endl;
	shiftRight(dArray2, ROWS, COLS, elem_num);
	Print(dArray2, ROWS, COLS); cout << endl << endl;
	shiftRight(chArray2, ROWS, COLS, elem_num);
	Print(chArray2, ROWS, COLS); cout << endl << endl;

	cout << "Отсортированные по возрастанию массивы: " << endl;
	Sort(intArray, SIZE);
	Print(intArray, SIZE); cout << endl;
	Sort(fArray, SIZE);
	Print(fArray, SIZE); cout << endl;
	Sort(dArray, SIZE);
	Print(dArray, SIZE); cout << endl;
	Sort(chArray, SIZE);
	Print(chArray, SIZE); cout << endl;
	cout << endl;

	cout << "Отсортированные по возрастанию двумерные массивы: " << endl;
	Sort(intArray2, ROWS, COLS);
	Print(intArray2, ROWS, COLS); cout << endl;
	Sort(fArray2, ROWS, COLS);
	Print(fArray2, ROWS, COLS); cout << endl;
	Sort(dArray2, ROWS, COLS);
	Print(dArray2, ROWS, COLS); cout << endl;
	Sort(chArray2, ROWS, COLS);
	Print(chArray2, ROWS, COLS); cout << endl;

}

void FillRand(int Arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 100;
	}
}
void FillRand(float Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() * 0.001;
	}
}
void FillRand(double Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() * 0.001;
	}
}
void FillRand(char Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 255;
	}
}

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() * 0.001;
		}
	}
}
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() * 0.001;
		}
	}
}
void FillRand(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 255;
		}
	}
}

void Print(int Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}
void Print(float Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}
void Print(double Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}
void Print(char Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}

		cout << endl;
	}
}
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}

		cout << endl;
	}
}
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}

		cout << endl;
	}
}
void Print(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}

		cout << endl;
	}
}

int Sum(int Arr[], int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	return sum;
}
float Sum(float Arr[], int SIZE)
{
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	return sum;
}
double Sum(double Arr[], int SIZE)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	return sum;
}
/*
char Sum(char Arr[], int SIZE)
{
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	return sum;
}
*/

int Sum(int Arr[ROWS][COLS], int ROWS, int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}

	return sum;
}
float Sum(float Arr[ROWS][COLS], int ROWS, int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}

	return sum;
}
double Sum(double Arr[ROWS][COLS], int ROWS, int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}

	return sum;
}

double Avg(int Arr[], int SIZE)
{
	return (double) Sum(Arr, SIZE) / SIZE;
}
double Avg(float Arr[], int SIZE)
{
	return (double) Sum(Arr, SIZE) / SIZE;
}
double Avg(double Arr[], int SIZE)
{
	return (double) Sum(Arr, SIZE) / SIZE;
}
/*
char Avg(char Arr[], int SIZE)
{
	return (char) Sum(Arr, SIZE) / SIZE;
}
*/

double Avg(int Arr[ROWS][COLS], int ROWS, int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float Arr[ROWS][COLS], int ROWS, int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double Arr[ROWS][COLS], int ROWS, int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int Arr[], int SIZE)
{
	int min = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}

	return min;
}
float minValueIn(float Arr[], int SIZE)
{
	float min = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}

	return min;
}
double minValueIn(double Arr[], int SIZE)
{
	double min = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}

	return min;
}
char minValueIn(char Arr[], int SIZE)
{
	double min = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}

	return min;
}

int minValueIn(int Arr[ROWS][COLS], int ROWS, int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}

	return min;
}
float minValueIn(float Arr[ROWS][COLS], int ROWS, int COLS)
{
	float min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}

	return min;
}
double minValueIn(double Arr[ROWS][COLS], int ROWS, int COLS)
{
	double min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}

	return min;
}
char minValueIn(char Arr[ROWS][COLS], int ROWS, int COLS)
{
	char min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}

	return min;
}

int maxValueIn(int Arr[], int SIZE)
{
	int max = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}

	return max;
}
float maxValueIn(float Arr[], int SIZE)
{
	float max = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}

	return max;
}
double maxValueIn(double Arr[], int SIZE)
{
	double max = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}

	return max;
}
char maxValueIn(char Arr[], int SIZE)
{
	char max = Arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}

	return max;
}

int maxValueIn(int Arr[ROWS][COLS], int ROWS, int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}

	return max;
}
float maxValueIn(float Arr[ROWS][COLS], int ROWS, int COLS)
{
	float max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}

	return max;
}
double maxValueIn(double Arr[ROWS][COLS], int ROWS, int COLS)
{
	double max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}

	return max;
}
char maxValueIn(char Arr[ROWS][COLS], int ROWS, int COLS)
{
	char max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}

	return max;
}

void shiftLeft(int Arr[], int SIZE, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[i];
		for (int j = 0; j < SIZE; j++)
		{
			Arr[j] = Arr[j + 1];
		}
		Arr[SIZE - 1] = buffer;
	}
}
void shiftLeft(float Arr[], int SIZE, int num_of_elements)
{
	float buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[i];
		for (int j = 0; j < SIZE; j++)
		{
			Arr[j] = Arr[j + 1];
		}
		Arr[SIZE - 1] = buffer;
	}
}
void shiftLeft(double Arr[], int SIZE, int num_of_elements)
{
	double buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[i];
		for (int j = 0; j < SIZE; j++)
		{
			Arr[j] = Arr[j + 1];
		}
		Arr[SIZE - 1] = buffer;
	}
}
void shiftLeft(char Arr[], int SIZE, int num_of_elements)
{
	char buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[i];
		for (int j = 0; j < SIZE; j++)
		{
			Arr[j] = Arr[j + 1];
		}
		Arr[SIZE - 1] = buffer;
	}
}

void shiftLeft(int Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][j];
			for (int k = 0; k < COLS; k++)
			{
				Arr[i][k] = Arr[i][k + 1];
			}
			Arr[i][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(float Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][j];
			for (int k = 0; k < COLS; k++)
			{
				Arr[i][k] = Arr[i][k + 1];
			}
			Arr[i][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(double Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][j];
			for (int k = 0; k < COLS; k++)
			{
				Arr[i][k] = Arr[i][k + 1];
			}
			Arr[i][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(char Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][j];
			for (int k = 0; k < COLS; k++)
			{
				Arr[i][k] = Arr[i][k + 1];
			}
			Arr[i][COLS - 1] = buffer;
		}
	}
}

void shiftRight(int Arr[], int SIZE, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[SIZE - 1];
		for (int j = SIZE - 1; j >= 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = buffer;
	}
}
void shiftRight(float Arr[], int SIZE, int num_of_elements)
{
	float buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[SIZE - 1];
		for (int j = SIZE - 1; j >= 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = buffer;
	}
}
void shiftRight(double Arr[], int SIZE, int num_of_elements)
{
	double buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[SIZE - 1];
		for (int j = SIZE - 1; j >= 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = buffer;
	}

}
void shiftRight(char Arr[], int SIZE, int num_of_elements)
{
	char buffer;
	for (int i = 0; i < num_of_elements; i++)
	{
		buffer = Arr[SIZE - 1];
		for (int j = SIZE - 1; j >= 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = buffer;
	}
}

void shiftRight(int Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	int buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][COLS - 1];
			for (int j = COLS - 1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}

			Arr[i][0] = buffer;
		}
	}
}
void shiftRight(float Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	float buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][COLS - 1];
			for (int j = COLS - 1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}

			Arr[i][0] = buffer;
		}
	}
}
void shiftRight(double Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	double buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][COLS - 1];
			for (int j = COLS - 1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}

			Arr[i][0] = buffer;
		}
	}
}
void shiftRight(char Arr[ROWS][COLS], int ROWS, int COLS, int num_of_elements)
{
	char buffer;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < num_of_elements; j++)
		{
			buffer = Arr[i][COLS - 1];
			for (int j = COLS - 1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}

			Arr[i][0] = buffer;
		}
	}
}

void Sort(int Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (Arr[j] < Arr[min_indx]) min_indx = j;
		}
		if (min_indx != i)
		{
			int buffer = Arr[i];
			Arr[i] = Arr[min_indx];
			Arr[min_indx] = buffer;
		}
	}	
}
void Sort(float Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (Arr[j] < Arr[min_indx]) min_indx = j;
		}
		if (min_indx != i)
		{
			float buffer = Arr[i];
			Arr[i] = Arr[min_indx];
			Arr[min_indx] = buffer;
		}
	}
}
void Sort(double Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (Arr[j] < Arr[min_indx]) min_indx = j;
		}
		if (min_indx != i)
		{
			double buffer = Arr[i];
			Arr[i] = Arr[min_indx];
			Arr[min_indx] = buffer;
		}
	}
}
void Sort(char Arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (Arr[j] < Arr[min_indx]) min_indx = j;
		}
		if (min_indx != i)
		{
			char buffer = Arr[i];
			Arr[i] = Arr[min_indx];
			Arr[min_indx] = buffer;
		}
	}
}

void Sort(int Arr[ROWS][COLS], int ROWS, int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int min_indx = j;
			for (int k = j + 1; k < COLS; k++)
			{
				if (Arr[i][k] < Arr[i][min_indx]) min_indx = k;
			}
			if (min_indx != j)
			{
				int buffer = Arr[i][j];
				Arr[i][j] = Arr[i][min_indx];
				Arr[i][min_indx] = buffer;
			}
		}
	}
}
void Sort(float Arr[ROWS][COLS], int ROWS, int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int min_indx = j;
			for (int k = j + 1; k < COLS; k++)
			{
				if (Arr[i][k] < Arr[i][min_indx]) min_indx = k;
			}
			if (min_indx != j)
			{
				float buffer = Arr[i][j];
				Arr[i][j] = Arr[i][min_indx];
				Arr[i][min_indx] = buffer;
			}
		}
	}
}
void Sort(double Arr[ROWS][COLS], int ROWS, int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int min_indx = j;
			for (int k = j + 1; k < COLS; k++)
			{
				if (Arr[i][k] < Arr[i][min_indx]) min_indx = k;
			}
			if (min_indx != j)
			{
				double buffer = Arr[i][j];
				Arr[i][j] = Arr[i][min_indx];
				Arr[i][min_indx] = buffer;
			}
		}
	}
}
void Sort(char Arr[ROWS][COLS], int ROWS, int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int min_indx = j;
			for (int k = j + 1; k < COLS; k++)
			{
				if (Arr[i][k] < Arr[i][min_indx]) min_indx = k;
			}
			if (min_indx != j)
			{
				char buffer = Arr[i][j];
				Arr[i][j] = Arr[i][min_indx];
				Arr[i][min_indx] = buffer;
			}
		}
	}
}