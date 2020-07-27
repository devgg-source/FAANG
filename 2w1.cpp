/*Sort an array of 0’s 1’s 2’s without using extra space or sorting algo

Input: 5
1 2 0 2 1

Output:
0 1 1 2 2 
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0,ones=0,twos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zeros++;
            else if(nums[i]==1)
                ones++;
            else
                twos++;
        }
        int count=0;
        for(int i=0;i<zeros;i++){
            nums[i]=0;
        }
        for(int i=zeros;i<zeros+ones;i++){
            nums[i]=1;
        }
        for(int i=zeros+ones;i<zeros+ones+twos;i++){
            nums[i]=2;
        }
        for(int x : nums){
            cout << x << " ";
        }
    }
};
