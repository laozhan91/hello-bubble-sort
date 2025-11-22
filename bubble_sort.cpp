#include <iostream>
#include <vector>
using namespace std;

// 冒泡排序函数（降序）
void bubbleSortDesc(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        // 内层循环：每轮把最小的元素"冒泡"到末尾
        for (int j = 0; j < n - i - 1; ++j) {
            // 小于号实现从大到小排序
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数字个数n：";
    cin >> n;

    vector<int> nums(n);
    cout << "请输入" << n << "个数字（以空格隔开）：";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 排序
    bubbleSortDesc(nums);

    // 输出结果
    cout << "从大到小排序结果：";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
