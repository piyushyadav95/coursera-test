#include <iostream>
#include <algorithm>

using namespace std; // Add this line

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(begin(arr), end(arr)); // No need for std:: prefix

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // No need for std:: prefix
    }

    
}

int main() {
   
    return 0;
}
