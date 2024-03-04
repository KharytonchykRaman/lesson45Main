#include <iostream>

using namespace std;

void rand_init(int* array, int size, int min, int max);
string convert_array_string(int* array, int size);
bool local_min(int* array, int size);
bool local_max(int* array, int size);
string local_min_str(int* array, int size);
string local_max_str(int* array, int size);
int count_local_min(int* array, int size);
int count_local_max(int* array, int size);

int main() {
	int size = 0;

	do
	{
		cout << "Input array size : ";
		cin >> size;
	} while (size < 1);

	int* array = new int[size];

	rand_init(array, size, -10, 10);
	cout << convert_array_string(array, size);

	string firstMsg = local_min(array, size) ? "" : " no";
	cout << "\nThis array has" << firstMsg << " local minimum";

	string secondMsg = local_max(array, size) ? "" : " no";
	cout << "\nThis array has" << secondMsg << " local maximum";

	cout << "\nLocal minimums : " << local_min_str(array, size);
	cout << "\nLocal maximums : " << local_max_str(array, size);

	cout << "\nThis array has " << count_local_min(array, size) <<" local minimums";
	cout << "\nThis array has " << count_local_max(array, size) << " local maximums";

	delete[] array;

	return 0;
}

