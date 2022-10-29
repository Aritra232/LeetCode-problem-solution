class Solution
{
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        int l, h,mid;
        char w = letters[0];
        l = 0;
        h = letters.size() - 1;

        while(l <= h)
        {
            mid = (l+h)/2;

            if(target >= letters[mid])
            {
                l = mid + 1;
            }
            else if(target < letters[mid])
            {
                w = letters[mid];
                h = mid - 1;
            }
        }
        return w;
    }
};
