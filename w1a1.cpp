/*  Find All Numbers Disappeared in an Array
Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
           vector<int> ans;
        
        int index;
        for(int i=0;i<nums.size();i++)
        {
                index= abs(nums[i])-1;
                if(nums[index]>0)
                {
                        nums[index]= -nums[index];
                }
               
        }
            
            for(int i=0;i<nums.size();i++)
            {
                  if(nums[i]>0)
                          ans.push_back(i+1);
                    
            }
            
            return ans;
           
    }
    
};
