class Solution {
public:
    int binaryGap(int n) {

        /*
Given: +ve integer n
1. find
2. return longest dist b/w 2 adjacent 1's in representation of n
3. if no adjacent 1's return 0

eg: 1001 -> 3-0 =  3

100101 -> 5-2 = 3 -> max(3, 2)

find set bit using left shift

approach:

find set bit
n & 1<<
set bit 1 = 
set bit 2 = 
dist = set bit 2 -  set bit 1
maxdist = max(maxdist, dist)

*/
        // int curr = 0;
        int prev = -1;
        int result = 0;

        // while(n > 0){
        //     if((n&1) > 0){
        //         result = (prev != -1) ? max(result, curr-prev) : result;
        //         prev = curr;
        //     }
        //     n>>=1;
        //     curr++;
        // }
        for(int curr = 0; curr < 32; curr++){
            if(((n>>curr)&1) > 0){
                result = (prev!=-1) ? max(result, curr-prev) : result;
                prev=curr;
            }
        }
        return result;
    }
};