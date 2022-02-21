class Solution {
public:
    int majorityElement(vector<int>& a) {
        int m_index = 0, count = 1;
        int size = a.size();
        for (int i = 1; i < size; i++) {
            if (a.at(m_index) == a.at(i))
                count++;
            else
                count--;
            if (count == 0) {
                m_index = i;
                count = 1;
            }
        }
        return a.at(m_index);
    }
};
