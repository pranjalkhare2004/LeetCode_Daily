class Solution {
public:


// ------------------------------- Approach 1 ---------------------------
// int s;
// vector<vector<int>> result;

//     void solve(unordered_map<int, int>& mp, vector<int>& temp){

//         if(temp.size() == s){
//             result.push_back(temp);
//             return;
//         }

//         for(auto& [num, count] : mp) {
//             if(count == 0) continue;

//             temp.push_back(num);
//             mp[num]--;

//             solve(mp, temp);

//             temp.pop_back();
//             mp[num]++;
            
//         }
//     }

//-------------------------------Approach 2-----------------------------------------

vector<vector<int>> result;
int s;

void solve(vector<int>& nums, int idx) {

    if(idx == s) {
        result.push_back(nums);
        return;
    }
    unordered_set<int> uniqueSet;

    for(int i = idx; i < s; i++) {
        if(uniqueSet.find(nums[i]) != uniqueSet.end()) {
            continue;
        }
        uniqueSet.insert(nums[i]);
        swap(nums[i], nums[idx]);

        solve(nums, idx+1);

        swap(nums[i], nums[idx]);
    }
}

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // s = nums.size();
        // unordered_map<int, int> mp;

        // for(auto& n : nums){
        //     mp[n]++;
        // }

        // vector<int> temp;
        // solve(mp, temp);

        // return result;

        s = nums.size();

        solve(nums, 0);

        return result;


    }
};