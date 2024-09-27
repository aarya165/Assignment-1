#include <iostream>

using namespace std;

//write your code here

// Function to find the median
double findMedian(int arr1[], int size1, int arr2[], int size2) {
    int totalSize = size1 + size2;
    int medianPos = totalSize / 2;
    bool isEven = (totalSize % 2 == 0); // here i am checking if we have even or odd in total number of elements                                                                                
    
    int i = 0, j = 0; // starting for the two arrays
    int current, previous;
    
    // Mergring the arrays to reach median
    for (int count = 0; count <= medianPos; count++) {
        previous = current;
        
        //this is to compare both the values and change the i and j values accordingly
        if (i < size1 && (j >= size2 || arr1[i] < arr2[j])) {
            current = arr1[i];
            i++;
        } else {
            current = arr2[j];
            j++;
        }
    }
    
    // If the total number of elements is even, we need to return the average of two middle elements
    if (isEven) {
        return (current + previous) / 2.0;
    }
    
    // If the total number of elements is odd, just return the current element
    return current;

}


int main() {
    // You can use cout statements, but ensure that you submit after commenting them out, as the autograder will otherwise mistake it for your actual output
    // Everything else in the main function remains unchanged
    
    int size1;
    // cout << "Enter the size of the array1: ";
    cin >> size1;

    int arr[size1];
    // cout << "Enter " << size1 << " elements:" << endl;
    for (int i = 0; i < size1; ++i) {
        cin >> arr[i];
    }

    // cout << "The array elements are: ";
    // for (int i = 0; i < size1; ++i) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int size2;
    // cout << "Enter the size of the array2: ";
    cin >> size2;

    int arr1[size2];
    // cout << "Enter " << size2 << " elements:" << endl;
    for (int i = 0; i < size2; ++i) {
        cin >> arr1[i];
    }

    // cout << "The array elements are: ";
    // for (int i = 0; i < size2; ++i) {
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;
    
    cout << "Median = " << findMedian(arr, size1, arr1, size2) << endl; // do not comment this out
    
    return 0;
}
