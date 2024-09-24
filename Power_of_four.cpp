class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag = false;
        int  p;
        if(n==1 || n==4){
            return true;
        }
        
        while(true){
            if(n%4!=0){
            return false;
        }
            p = n%4;
            n = n/4;
            if(n==4 && p==0){
                return true;
            }
            if(n<4){
                break;
            }
        }
        return flag;
    }
};
