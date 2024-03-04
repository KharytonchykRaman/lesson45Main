#include <iostream>
#include <string>

using namespace std;

void rand_init(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_string(int* array, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

bool local_min(int* array, int size) {

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
			return true;
		}
	}
	if (array[0] < array[1] || array[size - 1] < array[size - 2])
	{
		return true;
	}
	return false;
}

bool local_max(int* array, int size) {

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
			return true;
		}
	}
	if (array[0] > array[1] || array[size - 1] > array[size - 2])
	{
		return true;
	}
	return false;
}

string local_min_str(int* array, int size) {
	string msg = array[0] < array[1] ? to_string(array[0]) + " " : "";

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			msg += to_string(array[i]) + " ";
		}
	}
	msg += array[size - 1] < array[size - 2] ? to_string(array[size - 1]) : "";
	return msg;
}

string local_max_str(int* array, int size) {
	string msg = array[0] > array[1] ? to_string(array[0]) + " " : "";

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
			msg += to_string(array[i]) + " ";
		}
	}
	msg += array[size - 1] > array[size - 2] ? to_string(array[size - 1]) : "";
	return msg;
}

int count_local_min(int* array, int size) {
	int count = array[0] < array[1] ? 1 : 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
			count++;
		}
	}
	count += array[size - 1] < array[size - 2] ? 1 : 0;
	return count;
}

int count_local_max(int* array, int size) {
	int count = array[0] > array[1] ? 1 : 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
			count++;
		}
	}
	count += array[size - 1] > array[size - 2] ? 1 : 0;
	return count;
}