#include <iostream>
using namespace std;

void MightGoWrong()
{
    bool error = true;

    if (error)
    {
        throw 8;
    }
}

int main()
{
    MightGoWrong();
    return 0;
}