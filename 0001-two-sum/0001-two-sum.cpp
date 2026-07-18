class Solution
{
    public:
    int value_2;
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int>index;
        for(int i=0;i<nums.size();i++)
        {
            index[nums[i]]=i;
        }
        for(int j=0;j<nums.size();j++)
        {
            value_2=target-nums[j];
            auto it=index.find(value_2);
            if(it!=index.end()&&it->second!=j)
            {
                return {j,it->second};
                break;
            }
        }
        return {-1,-1};
    }
};