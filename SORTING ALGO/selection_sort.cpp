#include <iostream>
using namespace std;

void selectionSort(int input[], int n) {
	for(int i = 0; i < n-1; i++ ) {
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) {
			if(input[j] < min) {
		/*!!!! updating min value and min index  !!!!*/
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
	}
}

int main() {
	int input[] = {3, 1, 6, 9, 0, 4};
	selectionSort(input, 6);
	for(int i = 0; i < 6; i++) {
		cout << input[i] << " ";
			 
	}
	cout << endl;
}
/* 
########## Crucial Points ##################

	1. In beginning, we assume 1st element as 'min' & 0 as 'minIndex'.
	2. Outer loop run form 0 to n-1.
	3. for each element of i, inner loop 'j' run from 'i+1' to 'n' to find the 'min'.
	4. if( arr[j] < min i.e. arr[i]) ,update 'minIndex' to 'j' & 'min' to 'arr[minIndex]'.
	5. swap smallest element 'arr[minIndex]' with element at 'i' which is arr[i].
	
*/