class Solution
{
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int l,h,mid;
        l = 0;
        h = arr.size()-1;

        while(l<h)
        {
            mid = (l+h)/2;
            if(arr[mid+1]>arr[mid])
            {
                l = mid + 1;
            }
            else if(arr[mid+1]<arr[mid])
            {

                h = mid;
            }
        }
        return h;
    }
};
