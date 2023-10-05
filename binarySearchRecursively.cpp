#include <iostream>

using namespace std;

const int ARR_LENGHT = 5;

int binarySearchRecursively(int arr[ARR_LENGHT], int targer, int left, int right);

int main() {
	int arr[ARR_LENGHT], target, index;

	cout << "Input " << ARR_LENGHT << " arr values:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}
	cout << "Input search value:" << endl;
	cin >> target;

	index = binarySearchRecursively(arr, target, 0, ARR_LENGHT);
	if (arr[index] == target) {
		cout << "Search value index = " << index << endl;
	} else {
		cout << "Search value not found" << endl;
	}
}

int binarySearchRecursively(int arr[ARR_LENGHT], int target, int left, int right) {
	int mid = (left + right) / 2;

	if (left >= right) {
		return --right;
	} else {
		arr[mid] > target ? right = mid : left = mid + 1;
		binarySearchRecursively(arr, target, left, right);
	}
}