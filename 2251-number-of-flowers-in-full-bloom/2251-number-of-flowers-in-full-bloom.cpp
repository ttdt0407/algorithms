class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n1 = flowers.size();
        int n2 = people.size();

        vector<int> res(n2, 0);
        map<int, int> d;
        
        for (auto x : flowers)
        {
            d[x[0]]++;
            d[x[1] + 1]--;
        }

        map<int, int> temp;
        for (int i = 0; i < n2; i++)
        {
            d[people[i]];
            temp[people[i]] = 1;
        }
        
        int sum = 0;
        for (auto it : d)
        {
            sum += it.second;
            if (temp[it.first] == 1)
            {
                temp[it.first] = sum;
            }
        }

        for (int i = 0; i < n2; i++)
        {
            res[i] = temp[people[i]];
        }
        return res;
    }
};