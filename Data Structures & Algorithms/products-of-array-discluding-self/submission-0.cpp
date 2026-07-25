class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tot=1;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;++i){
            int tot=1;
            for(int j=0;j<n;++j){
                if(i==j) continue;
                tot*=nums[j];
            }
            ans.push_back(tot);
        }
        return ans;

    }
};
