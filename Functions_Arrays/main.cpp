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

int Avg(int Arr[], int SIZE);
float Avg(float Arr[], int SIZE);
double Avg(double Arr[], int SIZE);
char Avg(char Arr[], int SIZE);

int minValueIn(int Arr[], int SIZE);
float minValueIn(float Arr[], int SIZE);
double minValueIn(double Arr[], int SIZE);
char minValueIn(char Arr[], int SIZE);

int maxValueIn(int Arr[], int SIZE);
float maxVlaueIn(float Arr[], int SIZE);
double maxVlaueIn(double Arr[], int SIZE);
char maxVlaueIn(char Arr[], int SIZE);

int shiftLeft(int Arr[], int SIZE, int num_of_elements);
float shiftLeft(float Arr[], int SIZE, int num_of_elements);
double shiftLeft(double Arr[], int SIZE, int num_of_elements);
char shiftLeft(char Arr[], int SIZE, int num_of_elements);

int shiftRight(int Arr[], int SIZE, int num_of_elements);
float shiftRight(float Arr[], int SIZE, int num_of_elements);
double shiftRight(double Arr[], int SIZE, int num_of_elements);
char shiftRight(char Arr[], int SIZE, int num_of_elements);

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
	

}

