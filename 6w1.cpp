/*  Merge Overlapping Subintervals

For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8} }. 
The intervals {1,3} and {2,4} overlap with each other, 
so they should be merged and become {1, 4}. Similarly {5, 7} and {6, 8} should be merged and become {5, 8}
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int k=0;
        
        if(intervals.size() < 2){
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        int cur_start = intervals[0][0];
        int cur_end = intervals[0][1];
        res.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++){
            if(cur_end >= intervals[i][0]) {
                res[k][1] = cur_end > intervals[i][1] ? cur_end : intervals[i][1];
                cur_end = res[k][1];
            }
            else {
                res.push_back(intervals[i]);
                cur_start = intervals[i][0];
                cur_end = intervals[i][1];
                k++;
            }
        }
        return res;
    }
};
