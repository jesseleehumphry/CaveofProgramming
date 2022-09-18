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
    catch (bad_alloc& e)
    {
        cout << "Bad memory alloc: Cannot allocate desired memory in class Wrong" << endl;
    }

    return 0;
}
