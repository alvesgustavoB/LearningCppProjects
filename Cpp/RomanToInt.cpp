#include <iostream>
#include <unordered_map>
class Solution {
public:
    int RomanToInt(std::string s);
};
int main()
{
    Solution sol;
    std::string s;
    std::cin >> s;
    sol.RomanToInt(s);
    return 0;
}

int Solution::RomanToInt(std::string s)
{
    const char* str = s.c_str();
    char c = str[0];
    int roman{ 0 };
    std::unordered_map<char, int> map{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
    for (int i = 0; i < s.length(); i++) {
        if (map[str[i]] < map[str[i + 1]])
            roman -= map[str[i]];
        else
            roman += map[str[i]];
    }
    std::cout << roman;
    return roman;
}
