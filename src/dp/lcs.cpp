#include <iostream>
#include <vector>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int lcs(std::string& s1, std::string& s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    std::vector<std::vector<int> > lcs;
    lcs.resize(l2 + 1, std::vector<int>(l1 + 1));

    for(unsigned int i = 0; i <= l1; ++i){
        for(unsigned int j = 0; j <= l2; ++j){
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (s1[i-1] == s2[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;

            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }

    }
    return lcs[l1][l2];
}
