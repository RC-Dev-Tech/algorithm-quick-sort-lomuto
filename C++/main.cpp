#include <iostream>
#include <vector>

// Lomuto partition scheme.
int partition(std::vector<int>& nums, int low, int high) {
    int pivot = nums[high];  // 選擇最右邊的元素作為基準點.
    int i = low;  // 初始化指標i為起始位置.

    for (int j = low; j < high; j++) {
        if (nums[j] <= pivot) {
            std::swap(nums[i], nums[j]);
            i++;
        }
    }

    std::swap(nums[i], nums[high]);
    return i;  // 返回基準點的位置.
}

void quickSort(std::vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(nums, low, high);  // 獲取基準點的位置.
        quickSort(nums, low, pivotIndex - 1);  // 遞迴排序基準點左邊的子數列.
        quickSort(nums, pivotIndex + 1, high);  // 遞迴排序基準點右邊的子數列.
    }
}

int main() {
    std::vector<int> nums = {90, 40, 10, 60, 70, 30, 80, 20, 50};

    //原始數列.
    std::cout << "Original array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Lomuto partition scheme Sort. 
    quickSort(nums, 0, nums.size() - 1);

    // 排序後數列.
    std::cout << "Sorted array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
