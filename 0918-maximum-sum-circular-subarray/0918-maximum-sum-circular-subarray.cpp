class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxending=nums[0];
        int minending=nums[0];
        int total=0;
        int minsum=nums[0];
        int maxsum=nums[0];
        int circular=nums[0];
        
        int ans=nums[0];
        
         for(int i=0;i<n;i++){
                 total=total+nums[i];

            }
        for(int i=1;i<n;i++){
            
            
            int v1=maxending+nums[i];
            int v2=minending+nums[i];
            int v3=nums[i];
            maxending=max(v3,v1);
            minending=min(v3,v2);
            minsum=min(minsum,minending);
            maxsum=max(maxsum,maxending);
            circular=total-minsum;
            ans=max(ans,max(circular,maxsum));


        }
        if(maxsum<0){
            return maxsum;
        }
        return ans;
        
    }
};