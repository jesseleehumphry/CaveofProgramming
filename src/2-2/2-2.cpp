#include <iostream>
using namespace std;

class CanGoWrong
{
public:
    CanGoWrong()
    {
        char *pMemory = new char[99999999999999999];
        delete [] pMemory;
    }
};

int main()
{
    try
    {
        CanGoWrong wrong;
    }
    catch ()

    return 0;
}
