class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending=nums[0];
        int minending=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int v1=maxending+nums[i];
            int v2=minending+nums[i];
            int v3=nums[i];

            maxending=max(v3,max(v1,v2));
            minending=min(v3,min(v1,v2));
            int ans1=abs(minending);
            int ans2=abs(maxending);
            int ans3=abs(v3);
             ans=max(ans,max(ans1,ans2));
            


        }
        if(ans==-1){
            return 1;
        }
        return ans;
        
    }
};