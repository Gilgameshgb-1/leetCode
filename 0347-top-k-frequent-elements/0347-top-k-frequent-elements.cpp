class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> mx;
        vector<int> retVec;
        int tmpNum = nums[0];
        
        std::sort(nums.begin(), nums.end(), [](int a, int b) {
            return a < b;
        });
        
        if(nums.size() == 1)
        {
            retVec.push_back(nums[0]);
            return retVec;
        }
        
        if(nums[0] == nums[nums.size()-1])
        {
            retVec.push_back(nums[0]);
            return retVec;
        }
        
        std::vector<int> tmpVec;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == tmpNum && i == nums.size() - 1)
            {
                tmpVec.push_back(nums[i]);
                mx.push_back(tmpVec);
                tmpVec.clear();
            }
            else if(nums[i] == tmpNum)
            {
                tmpVec.push_back(nums[i]);
                //std::cout<<tmpVec[0];
            }else
            {
                mx.push_back(tmpVec);
                tmpVec.clear();
                tmpVec.push_back(nums[i]);
                tmpNum = nums[i];
                //std::cout<<tmpVec[0];
                if(i == nums.size() - 1)
                {
                    mx.push_back(tmpVec);
                }
            }
        }
        
        std::sort(mx.begin(), mx.end(), [](const std::vector<int>& v1, const std::vector<int>& v2){
            return v1.size() > v2.size();
        });

        for(int i = 0; i < mx.size(); i++)
        {
            for(int j = 0; j < mx[i].size(); j++)
            {
                std::cout<<mx[i][j];
            }
            std::cout<<"\n";
        }
        
        for(int i = 0; i < k; i++)
        {
            //std::cout<<"Resulting element: "<<mx[i][0]<<"\n";
            retVec.push_back(mx[i][0]);
        }
        for(int i = 0; i < retVec.size(); i++)
        {
            //std::cout<<retVec[i];
        }
        return retVec;
    }
};