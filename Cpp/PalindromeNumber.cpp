#include <iostream>
#include <string> 
int main()
{
    int x;
    std::cin >> x;
    int p = 0;
    std::string s = std::to_string(x); 
    const char* myStr = s.c_str();
    char c = myStr[0];//string to char
    int y = s.length(); 
    int j = (y - 1);
    for (int i = 0; i < y; i++)
    {
        if (myStr[i] == myStr[j])
        {
            p++;
        }
        j--;
    }
    if (p == y)
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
