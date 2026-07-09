class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int start1=nums[0][0];
        int end1=nums[0][1];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int start2=nums[i][0];
            int end2=nums[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }else{
                res.push_back({start1,end1});
                start1=start2;
                end1=end2;

            }

        }
        res.push_back({start1,end1});
        return res;


        
    }
};