//FIRST PROGRAM
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 34, 56, 23, 78, 12, 90, 45};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  
        }
    }
    cout << "The largest value in the array is: " << largest << endl;

    return 0;
}

// SECOND PROGRAM
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 
    int newItem;
    cout << "Enter the new item to insert at the top: ";
    cin >> newItem;
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newItem;
    n++; 
    cout << "Updated array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//THIRD PROGRAM
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 
    int newItem;
    cout << "Enter the new item to insert at the bottom: ";
    cin >> newItem;
    arr[n] = newItem;
    n++;  
    cout << "Updated array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//FOURTH PROGRAM
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 
    int loc, newItem;

    cout << "Enter the location (index) where the new item should be inserted: ";
    cin >> loc;
    if (loc < 0 || loc > n) {
        cout << "Invalid location!" << endl;
        return 1;
    }
    cout << "Enter the new item to insert: ";
    cin >> newItem;

    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }
    arr[loc] = newItem;
    n++;  
    cout << "Updated array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 

//fifth program
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 
    if (n == 0) {
        cout << "Array is already empty. No item to delete!" << endl;
        return 0;  
    }

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }

    n--; 
    cout << "Updated array after deletion from the top: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//sixth program
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;  
    if (n == 0) {
        cout << "Array is already empty. No item to delete!" << endl;
        return 0;  
    n--;
    cout << "Updated array after deletion from the bottom: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//seventh program
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 
    int loc;
    cout << "Enter the location (index) to delete the item: ";
    cin >> loc;
    if (loc < 0 || loc >= n) {
        cout << "Invalid location! Location should be between 0 and " << n-1 << "." << endl;
        return 1; 
    }
    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    cout << "Updated array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//Eight program
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Select search type: " << endl;
    cout << "1. Search by Index" << endl;
    cout << "2. Search by Value" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        int index;
        cout << "Enter the index to search for (0 to " << n - 1 << "): ";
        cin >> index;

        if (index >= 0 && index < n) {
            cout << "Element at index " << index << " is: " << arr[index] << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    } else if (choice == 2) {
        int value;
        cout << "Enter the value to search for: ";
        cin >> value;

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                cout << "Element " << value << " found at index: " << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Element " << value << " not found in the array." << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
//Ninth program
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int index, newValue;
    cout << "Enter the index of the element to update (0 to " << n-1 << "): ";
    cin >> index;
    if (index < 0 || index >= n) {
        cout << "Invalid index! Index must be between 0 and " << n-1 << "." << endl;
        return 1; 
    }
    cout << "Enter the new value for index " << index << ": ";
    cin >> newValue;
    arr[index] = newValue;
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//Tenth program
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sumArr[n];
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }
    cout << "The sum array is:\n";
    for (int i = 0; i < n; i++) {
        cout << sumArr[i] << " ";
    }
    cout << endl;

    return 0;
}



