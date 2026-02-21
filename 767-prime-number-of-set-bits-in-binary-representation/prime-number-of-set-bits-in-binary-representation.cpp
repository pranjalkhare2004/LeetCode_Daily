class Solution {
public:

bool isPrime(int n){
    if(n == 1 || n == 0) return false;
    for( int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;

}
    int countPrimeSetBits(int left, int right) {
        /*

2 int L and R
return count of numbers in range l and r, including them as well 
condition : include only those which has prime number of set bits

eg: 21 has 10101 - 3 set bits

tc1: l = 6 r = 10
0110 - 6
0111 - 7
1000
1001 - 9
1010 - 10




        */
    int count = 0;

    for( int i = left; i <= right; i++){
        int count_bit = __builtin_popcount(i);

        if(isPrime(count_bit)){
            count++;
        }
    }
    return count;
    }
};