class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int l,h,q,mid;
        l=0;
        h=n;
        while(l<=h)
        {
            mid=(l+h)/2;
            q = mid*(mid+1)/2;

            if(q<=n)
            {
                l=mid+1;
            }
            else if(q>=n)
            {
                h=mid-1;
            }
        }
        return h;
    }
};
