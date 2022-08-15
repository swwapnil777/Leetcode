class Solution {
public:
    bool helper(long long n,long long k){
        if(k==n){
            return true;
        }
        if(k>n){
            return false;
        }
        return helper(n,3*k);
    }
    bool isPowerOfThree(int n) {
       bool flag =  helper(n,1);
       return flag==true?true:false;
    }
};