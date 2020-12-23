#include <iostream>

int main()
{
    int hiredPerson = 0, answer = 0;
    int n;
    std::cin >> n;
    int i;

    while (n--)
    {
        std::cin >> i;
        // untreated happens only when there is no (new) hired person
        if (i < 0 && hiredPerson == 0)
        {
            answer += -1 * i;
        }
        else if (i < 0 && hiredPerson != 0)
        {
            hiredPerson += i;
        }
        else if (i > 0)
        {
            hiredPerson += i;
        }
    }

    std::cout << answer << std::endl;
}