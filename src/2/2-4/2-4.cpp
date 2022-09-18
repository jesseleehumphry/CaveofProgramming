#include <iostream>
#include <exception>

using namespace std;

void ErrorMsgs()
{
    bool error1 = false;
    bool error2 = true;

    if (error1)
    {
        throw bad_alloc();
    }

    if (error2)
    {
        throw exception();
    }
}


int main()
{
    try
    {
        ErrorMsgs();
    }
    catch (bad_alloc& e)
    {
        cout << "Caught bad_alloc: " << e.what() << endl;
    }
    catch (exception& e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
