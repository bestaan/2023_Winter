#include <iostream>
#include <cassert>
#include <fstream>

using namespace std;

bool CheckSorted(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
	
}

void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	// Selection Sort
	// 힌트: swap()
	
		// 8 3 2 5 
		// 2 3 8 5
		// 2 3 8 5
		// 2 3 5 8 
		// 2 3 5 8 

		int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 };
		int size = sizeof(arr) / sizeof(arr[0]);

		int min_index ;
		for (int i = 0; i < size-1 ; i++)
		{
			min_index = i;
			for (int j = i + 1; j < size; j++)
			{
				if (arr[min_index] > arr[j])
					min_index = j;
			}
			swap(arr[i], arr[min_index]);
			
			Print(arr, size);

			cout << boolalpha;
			cout << CheckSorted(arr, size);
			cout << endl;
		}

}
