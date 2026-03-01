class Solution {
public:
/*
big number as string n
 represent n -> (number with only 1 and 0) + (only 1's and 0's)...
 and tell total numbers used
 no leading zeroes
 positive
 minimize count

 intutition:
 each 1 will contribute 1 time only
 so if digit is 7 then 7 times 1, 1+1+1+1+1+1+1 = 7
 return 7

 keywords here:
 MINIMUM NUMBERS
 SUM
 DIGITS
 EACH DIGIT ONLY 0 AND 1
 VERY LARGE NUMBER (STRING)
 ---> THIS SCREAMS DIGIT WISE REASONING
 -----> DON'T THINK ABOUT 
 - DP
 - ACTUALLY CONSTRUCTING THE NUMBER
 - THINKING ABOUT CARRIES ( ONLY 0 AND 1 )


*/
    int minPartitions(string n) {
        int mD = 0;
        for(char c: n){
            mD = max(mD, c-'0');
        }
        return mD;
    }
};