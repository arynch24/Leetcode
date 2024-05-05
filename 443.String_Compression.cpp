class Solution {
public:
    int compress(vector<char>& c) {

        vector<char> c_new;
        c.push_back('^');
        int index = 0;
        for (int i = 0; i < c.size() - 1; i++) {
            if (c[i] != c[i + 1]) {
                c_new.push_back(c[i]);

                int u_count = i + 1 - index; // u_count - unique elements count
                index = i + 1;
                if (u_count > 1 ){
                    string str_u_count =to_string(u_count);
                    for (auto i : str_u_count)
                        c_new.push_back(i);
                }
            }
        }
        c.clear();
        for (auto i : c_new)
            c.push_back(i);

        return c_new.size();
    }
};
