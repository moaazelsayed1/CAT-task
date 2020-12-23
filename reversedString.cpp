#include <iostream>
#include<string>

std::string reverse(std::string p);

int main()
{
    std::string paragraph;
    std::getline(std::cin, paragraph);
    paragraph = reverse(paragraph);

    for (int i = 0; i < paragraph.length(); i++)
    {
        std::cout << paragraph[i];
    }
    std::cout << std::endl; 
    
}


std::string reverse(std::string p)
{
    // we only need to iterate over thr half of the array so we can
    // access every element only once and replace it with its index complement 
    for (int i = 0; i < p.length() / 2; i++)
    {
        char tmp = p[i];
        p[i] = p[(p.length() - 1) - i];
        p[(p.length() - 1) - i] = tmp;
    }
    return p;
}