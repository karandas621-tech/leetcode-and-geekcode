class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int remender=0;
        int res=0;
         
        unordered_map<int ,int>f;
        f[0]=1;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            remender=sum%k;
            if(remender<0)
                remender=remender+k;
            res=res+f[remender];
            f[remender]++;
        }
        return res;
        
    }
};