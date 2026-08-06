class Solution {
public:

     int firstOccurence(vector<int> &nums, int target)
    {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int res = -1;

        while(st <= end)
        {
            int mid = st + (end - st)/2;

            if(target == nums[mid])
            {
                res = mid;
                end = mid - 1;
            }

            else if(target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return res;
    }
    
    int lastOccurence(vector<int> &nums, int target)
    {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int res = -1;

        while(st <= end)
        {
            int mid = st + (end - st)/2;

            if(target == nums[mid])
            {
                res = mid;
                st = mid + 1; 
            }

            else if(target > nums[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);

        return {first,last};
    }
};