#include<iostream>
using namespace std;

void FillRand(int Arr[], const int SIZE);
void FillRand(float Arr[], int SIZE);
void FillRand(double Arr[], int SIZE);
void FillRand(char Arr[], int SIZE);

void Print(int Arr[], int SIZE);
void Print(float Arr[], int SIZE);
void Print(double Arr[], int SIZE);
void Print(char Arr[], int SIZE);

int Sum(int Arr[], int SIZE);
float Sum(float Arr[], int SIZE);
double Sum(double Arr[], int SIZE);
char Sum(char Arr[], int SIZE);

double Avg(int Arr[], int SIZE);
double Avg(float Arr[], int SIZE);
double Avg(double Arr[], int SIZE);
char Avg(char Arr[], int SIZE);

int minValueIn(int Arr[], int SIZE);
float minValueIn(float Arr[], int SIZE);
double minValueIn(double Arr[], int SIZE);
char minValueIn(char Arr[], int SIZE);

int maxValueIn(int Arr[], int SIZE);
float maxValueIn(float Arr[], int SIZE);
double maxValueIn(double Arr[], int SIZE);
char maxValueIn(char Arr[], int SIZE);

void shiftLeft(int Arr[], int SIZE, int num_of_elements);
void shiftLeft(float Arr[], int SIZE, int num_of_elements);
void shiftLeft(double Arr[], int SIZE, int num_of_elements);
void shiftLeft(char Arr[], int SIZE, int num_of_elements);

void shiftRight(int Arr[], int SIZE, int num_of_elements);
void shiftRight(float Arr[], int SIZE, int num_of_elements);
void shiftRight(double Arr[], int SIZE, int num_of_elements);
void shiftRight(char Arr[], int SIZE, int num_of_elements);

int Sort(int Arr[], int SIZE);
float Sort(float Arr[], int SIZE);
double Sort(double Arr[], int SIZE);
char Sort(char Arr[], int SIZE);

void main()
{
	setlocale(LC_ALL, "");

	cout << "\t*Работа с массивами*" << endl << endl;
	const int SIZE = 10;

	cout << "Заполнение массива случайными числами типа int:" << endl;
	int intArray[SIZE];
	FillRand(intArray, SIZE);
	Print(intArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение массива случайными числами типа float: " << endl;
	float fArray[SIZE];
	FillRand(fArray, SIZE);
	Print(fArray, SIZE);
	cout << endl << endl;
	
	cout << "Заполнение массива случайными числами типа double: " << endl;
	double dArray[SIZE];
	FillRand(dArray, SIZE);
	Print(dArray, SIZE);
	cout << endl << endl;

	cout << "Заполнение массива случайными числами типа char: " << endl;
	char chArray[SIZE];
	FillRand(chArray, SIZE);
	Print(chArray, SIZE);
	cout << endl << endl;

	cout << "Сумма элементов массивов: " << endl;
	cout << "Массив с элементами типа int - " << Sum(intArray, SIZE) << endl;
	cout << "Массив с элементами типа float - " << Sum(fArray, SIZE) << endl;
	cout << "Массив с элементами типа double - " << Sum(dArray, SIZE) << endl;
	cout << "Массив с элементами типа char - " << Sum(chArray, SIZE) << endl;
	cout << endl;

	cout << "Среднее значение элементов массивов: " << endl;
	cout << "Среднее значение массива с элементами типа int - " << Avg(intArray, SIZE) << endl;
	cout << "Среднее значение массива с элементами типа float - " << Avg(fArray, SIZE) << endl;
	cout << "Среднее значение массива с элементами типа double - " << Avg(dArray, SIZE) << endl;
	cout << "Среднее значение массива с элементами типа char - " << Avg(chArray, SIZE) << endl;
	cout << endl;

	cout << "Минимальное значение элементов массивов: " << endl;
	cout << "Минимальное значение массива с элементами типа int - " << minValueIn(intArray, SIZE) << endl;
	cout << "Минимальное значение массива с элементами типа float - " << minValueIn(fArray, SIZE) << endl;
	cout << "Минимальное значение массива с элементами типа double - " << minValueIn(dArray, SIZE) << endl;
	cout << "Минимальное значение массива с элементами типа char - " << minValueIn(chArray, SIZE) << endl;
	cout << endl;

	cout << "Максимальное значение элементов массивов: " << endl;
	cout << "Максимальное значение массива с элементами типа int - " << maxValueIn(intArray, SIZE) << endl;
	cout << "Максимальное значение массива с элементами типа float - " << maxValueIn(fArray, SIZE) << endl;
	cout << "Максимальное значение массива с элементами типа double - " << maxValueIn(dArray, SIZE) << endl;
	cout << "Максимальное значение массива с элементами типа char - " << maxValueIn(chArray, SIZE) << endl;
	cout << endl;

	int elem_num;
	cout << "Количество элементов сдвига массивов: "; cin >> elem_num;
	cout << endl << endl;
	cout << "Сдвиг элементов влево:" << endl;
	shiftLeft(intArray, SIZE, elem_num); cout << endl;
	shiftLeft(fArray, SIZE, elem_num); cout << endl;
	shiftLeft(dArray, SIZE, elem_num); cout << endl;
	shiftLeft(chArray, SIZE, elem_num); cout << endl;
	cout << endl;
	cout << "Сдвиг элементов вправо: " << endl;
	shiftRight(intArray, SIZE, elem_num); cout << endl;
	shiftRight(fArray, SIZE, elem_num); cout << endl;
	shiftRight(dArray, SIZE, elem_num); cout << endl;
	shiftRight(chArray, SIZE, elem_num); cout << endl;
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
		Arr[i] = rand() % 100;
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

char Sum(char Arr[], int SIZE)
{
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	return sum;
}

double Avg(int Arr[], int SIZE)
{
	double sum = 0, avg;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	avg = sum / SIZE;

	return avg;
}

double Avg(float Arr[], int SIZE)
{
	double sum = 0, avg;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	avg = sum / SIZE;

	return avg;
}

double Avg(double Arr[], int SIZE)
{
	double sum = 0, avg;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	avg = sum / SIZE;

	return avg;
}

char Avg(char Arr[], int SIZE)
{
	double sum = 0, avg;
	for (int i = 0; i < SIZE; i++)
	{
		sum += Arr[i];
	}

	avg = sum / SIZE;

	return avg;
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
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

	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}

int Sort(int Arr[], int SIZE);
float Sort(float Arr[], int SIZE);
double Sort(double Arr[], int SIZE);
char Sort(char Arr[], int SIZE);