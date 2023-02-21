#include <iostream>
int main()
{
    int j;
    std::cin >> j;
    for(int i=0;i<j;i++)
    {
        int M{ 0 }; //mass in kg
        int H{ 0 }; //height in meters
        std::cin >> M >> H;
        if ((M / (H * H)) <= 18) {
            std::cout << "1\n";
        }
        else if (((M / (H * H)) >= 19) && ((M / (H * H)) <= 24))
        {
            std::cout << "2\n";
        }
        else if (((M / (H * H)) >= 25) &&((M / (H * H)) <= 29))
        {
            std::cout << "3\n";
        }
        else if ((M / (H * H) >= 30))
        {
            std::cout << "4\n";
        }
    }
    return 0;
}
