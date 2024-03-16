#include <iostream>
#include <vector>

// Function to perform binary search
int binarySearch(const std::vector<int>& array, int target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the target is found at the middle
        if (array[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        else if (array[mid] < target)
            left = mid + 1;

        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the target is not found
    return -1;
}

int main() {
    std::vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 13;

    int index = binarySearch(array, target);
    if (index != -1)
        std::cout << "Element found at index " << index << std::endl;
    else
        std::cout << "Element not found" << std::endl;

    return 0;
}
