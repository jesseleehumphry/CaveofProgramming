#include <iostream>
#include <fstream>
using namespace std;

// Explanation
// Structs are "padded" in order to make them more efficient to work with
// The struct below should be 62 bytes, but sizeof returns 64. The struct is being padded
// In order to write this to file, we need to unpad via the pack directive, as shown below.

#pragma pack(push, 1)
struct Person
{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop);

int main()
{
    cout << sizeof(Person) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(Person::name) << endl;

    return 0;
}
