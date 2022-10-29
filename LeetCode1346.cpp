class Solution
{
public:
    bool checkIfExist(vector<int>& arr)
    {
        int p,q,r;
        p = arr.size();

        for(int i=0; i<p; i++)
        {
            for(int j=i+1; j<p; j++)
            {
                q = arr[j] * 2;
                r = arr[i] * 2;

                if(arr[i] == q || arr[j] == r)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
