class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>result;
        int repeat_num;
        int missing_num;
        int arr[nums.size()+1];
        for(int i=0;i<=nums.size();i++)
            arr[i]=0;
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(arr[i]==0)
                missing_num=i;
            else if(arr[i]==2)
                repeat_num=i;
        }
        result.push_back(repeat_num);
        result.push_back(missing_num);
        return result;
    }
};