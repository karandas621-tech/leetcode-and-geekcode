class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newnums) {
        int n=nums.size();
         
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
       
        bool insert=false;
        for(int i=0;i<n;i++){
            int start=nums[i][0];
            
            if(start>=newnums[0] && insert==false){
                res.push_back(newnums);
                insert=true;
            }
            res.push_back(nums[i]);    
        }
        if(insert==false){
            res.push_back(newnums);
            
        }
        vector<vector<int>>res2;
        sort(res.begin(),res.end());
          int start1=res[0][0];
        int end1=res[0][1];
        int m=res.size();
        for(int i=1;i<m;i++){
            int start2=res[i][0];
            int end2=res[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }

        
            else{
            res2.push_back({start1,end1});
            start1=start2;
            end1=end2;
            }
        }
        res2.push_back({start1,end1});
        return res2;
        
    }
};