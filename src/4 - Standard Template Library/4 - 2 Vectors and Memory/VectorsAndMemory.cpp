#include <iostream>
#include <vector>
using namespace std;

// Vector from STL is not like FVector in Unreal Engine. Vectors in this instance are like TArray.

int main()
{

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // Iterator object
    // and Iterator is a pointer to a position in the array, and the pointer returned by the function points to the object.
    // Dereference the pointer, and you'll get the information

    /* vector<string>::iterator it = strings.begin(); */

    // Iterator has overloaded the ++ so that it moves to the next item in the vector
    /* it++ */

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
