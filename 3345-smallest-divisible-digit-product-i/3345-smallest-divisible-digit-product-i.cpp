class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n;
        //int product = 1;
        while(true)
        {
            n = number;
            int product = 1;
            while(n)
            {
                product *= n%10;
                n/=10;
            }
            if(product%t == 0)
            break;
            else
            number++;
        }
        return number;
    }
};