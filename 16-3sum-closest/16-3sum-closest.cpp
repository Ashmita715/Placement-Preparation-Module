class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int n=nums.size();
        int ans=0,min_dif=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            
            int s=i+1,e=n-1;
            while(s<e){
                int curr_sum=nums[i]+nums[e]+nums[s];
                if(abs(curr_sum-target)<min_dif){
                    ans=curr_sum;
                    min_dif=abs(curr_sum-target);
                }
                if(curr_sum<target){
                    s++;
                }
                else
                    e--;
            }
        }   
        return ans;
    }
};