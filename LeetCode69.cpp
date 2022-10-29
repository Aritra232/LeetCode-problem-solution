class Solution
{
public:
    int mySqrt(int x)
    {
        long long int l,h,mid,q;
        l=0;
        h=x;
        while(l<=h)
        {
            mid = (l+h)/2;

            if(mid*mid <= x)
            {
                l=mid+1;
                q = mid;
            }
            else if(mid*mid >= x)
            {
                h=mid-1;
            }

        }
        return q;
    }
};
