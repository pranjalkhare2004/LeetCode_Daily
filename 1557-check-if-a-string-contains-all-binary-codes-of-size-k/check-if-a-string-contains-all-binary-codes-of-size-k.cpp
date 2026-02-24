class Solution {
public:
/*
Given:
    String s
    integer k
Output: true -> if EVERY binary code of Length K is a substring of S
        False -> otherwise
Example:
    00110110  k=2

00 01 10 11 -> these all can be found in the above Binary string

Example 2:
    0110  k=1
    TRUE
0 and 1 can be found in S

Example 3:
    0110 k=2
    False

00 NOT, 01 YES, 10 YES, 11 YES

Approach:
    0110
    k=2
    { 01 11 10 } store in set

*/
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        if(n < k) return false;

        unordered_set<string> st;

        for(int i = 0;i < n-k+1; i++){
            st.insert(s.substr(i,k));
            
        }
        return st.size() == (1 << k);


    }
};