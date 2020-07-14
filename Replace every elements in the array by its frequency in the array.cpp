// C++ program to replace the elements
// by their frequency in the array.
#include "iostream"
#include "unordered_map"
using namespace std;

void ReplaceElementsByFrequency(int arr[], int n)
{
	// Hash map which will store the
	// frequency of the elements of the array.
	unordered_map<int, int> mp;

	for (int i = 0; i < n; ++i) {

		// Increment the frequency
		// of the element by 1.
		mp[arr[i]]++;
	}

	// Replace every element by its frequency
	for (int i = 0; i < n; ++i) {
		arr[i] = mp[arr[i]];
	}
}

int main()
{
	int arr[] = { 1, 2, 5, 2, 2, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	ReplaceElementsByFrequency(arr, n);

	// Print the modified array.
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
