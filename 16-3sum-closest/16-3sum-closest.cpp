class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int n=nums.size();
        int ans=0,diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[k]+nums[j];
                if(abs(sum-target)<diff)
                { 
                   ans=sum;
                    diff=abs(sum-target);   
                }
                if(sum<target)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};