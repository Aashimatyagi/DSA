#include <iostream>
#include <vector>
class Solution
{
public:
    int Rotatedindex(std::vector<int> &arr, int target)
    {
        int n = arr.size();
        int s = 0;
        int e = n - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] >= arr[s])
            {
                if (arr[s] <= target && arr[mid] >= target)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            else if (arr[mid] <= arr[e])
            {
                if (arr[mid] <= target && arr[e] >= target)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
        return -1;
    }

    int search(std::vector<int> &nums, int target)
    {
        return Rotatedindex(nums, target);
    }
};
int main()
{
    Solution solution;
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = solution.search(nums, target);

    if (result != -1)
    {
        std::cout << "Target found at index: " << result << std::endl;
    }
    else
    {
        std::cout << "Target not found." << std::endl;
    }

    return 0;
}
