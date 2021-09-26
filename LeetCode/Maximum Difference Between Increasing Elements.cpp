class Solution {
public:
    int max(int x, int y) {
    return (x > y) ? x : y;
    }
    int maximumDifference(vector<int>& nums) {
        int diff = INT_MIN;
 
    if (nums.size() == 0) {
        return diff;
    }
 
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] > nums[i]) {
                diff = max(diff, nums[j] - nums[i]);
            }
        }
    }
    if(diff<-1) return -1;
    return diff;
    }
};
