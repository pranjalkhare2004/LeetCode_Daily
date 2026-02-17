class Solution {
public:
int s;
vector<vector<int>> result;

    void solve(unordered_map<int, int>& mp, vector<int>& temp){

        if(temp.size() == s){
            result.push_back(temp);
            return;
        }

        for(auto& [num, count] : mp) {
            if(count == 0) continue;

            temp.push_back(num);
            mp[num]--;

            solve(mp, temp);

            temp.pop_back();
            mp[num]++;
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        s = nums.size();
        unordered_map<int, int> mp;

        for(auto& n : nums){
            mp[n]++;
        }

        vector<int> temp;
        solve(mp, temp);

        return result;
    }
};