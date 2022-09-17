#include <iostream>
using namespace std;

void MightGoWrong()
{
    bool error1 = false;
    bool error2 = true;

    if (error1)
    {
        throw "Something went wrong.";
    }
    if (error2)
    {
        throw string("Something else went wrong.");
    }
}

void UsesMightGoWrong()
{
    MightGoWrong();
}

int main()
{
    try
    {
        UsesMightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch (char const* e)
    {
        cout << "Error message: " << e << endl;
    }
    catch (string& e)
    {
        cout << "String error message: " << e << endl;
    }

    return 0;
}
