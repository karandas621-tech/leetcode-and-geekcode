class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int withdel=0;
        int withoutdel=arr[0];
        int ans=arr[0];
        for(int i=1;i<n;i++){
            int v1=withoutdel+arr[i];
            int v2=withdel+arr[i];
            int v3=arr[i];
            withdel=max(v2,withoutdel);
            withoutdel=max(v1,v3);
            int best=max(withdel,withoutdel);
            ans=max(ans,best);
        }
        return ans;

        
    }
};