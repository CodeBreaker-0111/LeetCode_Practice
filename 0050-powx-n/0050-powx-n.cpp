class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans = 1;
        long nn = n;
        if(n==0)       //Base Case
        return 1;
        
        if(nn<0)    //If power is negative than do it positive
        nn = -1 * nn;

        while(nn>0)   //If it is gretaer than 2
        {
            //CHECK THE DIVISIBILITY OF 2 because if it is divisible by 2 it will compress the steps by 2
            if(nn % 2 == 0) 
            {
                x = x*x;     //multiply the x with each other 
                nn = nn/2;   //power ko kam krdo 2 se
            }
            else
            {
                ans = ans * x;   //Now if not in even than multiply individually and store it in ans
                nn = nn - 1;     //decrease the power by 1
            }
        }
        if(n<0)    //Now to handle the negative power bcz in starting we have converted it in positive
        {
            ans = 1/ans;
        }
        return ans;
    }
};