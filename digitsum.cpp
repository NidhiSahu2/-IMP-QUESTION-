class Solution {
public:
    int addDigits(int num) {
        int sum= 0;
        while(num!=0)
        {
            int digit = num%10;
            sum+=digit;
            num=num/10;
        }
        return sum;

    }


    int addDigits(int num){
    while(num>9)
    {
        num= addDigitHelper(num);
    }
    return num;
    }
};
