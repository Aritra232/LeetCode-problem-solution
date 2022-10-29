class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int p,q,l,h,mid,key;

        key = target;
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==key)
            {
                return mid;
            }
            else if(nums[mid]<key)
            {
                l=mid+1;

            }
            else if(nums[mid]>key)
            {
                h=mid-1;
            }
        }

        return -1;
    }
};
