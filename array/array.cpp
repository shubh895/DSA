#include <iostream>
#include <vector>
//ajkshdflhasldkfhkjashdfjnlaksdnfljnlkas
//alksdnflknaslkdnglkaans dngokansdilg asldkngolkansldknf alksdngl as
//;alsdlkfn aksdjfa skdjf asd flasld fflkaskd f alksndl
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Target is in the right half
        }
        else {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Sorted array
    int target = 7;

    int result = binarySearch(arr, target);
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
