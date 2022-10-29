class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long int l,h,mid;
        l=1;
        h=num;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(mid * mid == num)
            {
                return true;
            }
            else if(mid*mid < num)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }

        }
        return false;

    }
};

