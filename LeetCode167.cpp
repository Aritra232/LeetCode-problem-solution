class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int l,h,mid,t,ide1,ide2;
        l = 0;
        h = numbers.size()-1;

        while(l<h)
        {
            t = numbers[l] + numbers[h];
            if(t == target)
            {
                ide1 = l+1;
                ide2 = h+1;
                return {ide1,ide2};
            }
            else if(t<target)
            {
                l++;

            }
            else if(t>target)
            {
                h--;
            }
        }
        return {};
    }
};
