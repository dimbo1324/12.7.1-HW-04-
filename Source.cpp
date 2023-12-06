

#include <iostream>
#include <string>


bool IsKPeriodic(const std::string& str, int k) 
{


    if (k <= 0) 
    {
        std::cerr << "������: K ������ ���� ������ 0." << std::endl;
        return false;
    }

    
    if (str.length() % k != 0) 
    {
        std::cerr << "������: ����� ������ �� ������� ������ �� K." << std::endl;
        return false;
    }


    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[i % k])
        {
            return false;
        }
    }
    return true;
}


int main() 
{
    setlocale(LC_ALL, "RUS");
    std::string input;
    int k;

 
    std::cout << "������� ������: ";
    std::cin >> input;


    std::cout << "������� ����� K: ";
    std::cin >> k;

 
    if (IsKPeriodic(input, k))
    {
        std::cout << "������ ������ " << k << std::endl;
    }
    else 
    {
        std::cout << "������ �� ������ " << k << std::endl;
    }
    return 0;
}
