/*Find the duplicate in an array of N integers

Input: 5
1 2 3 3 4 
output: 3
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) {
                ans.push_back(index + 1);
            }
            else nums[index] *= -1; 
        }
        return ans;
    }
};
