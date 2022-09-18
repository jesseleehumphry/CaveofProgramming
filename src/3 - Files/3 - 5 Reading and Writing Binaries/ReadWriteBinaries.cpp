#include <iostream>
#include <fstream>
using namespace std;

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
    Person person = {"Jane",28,45};

    /////////////////////////////////////////////////////////////////////
    // Write Binary File

    string filename = "test.bin";
    fstream output;


    output.open(filename, ios::binary|ios::out);

    if (output.is_open())
    {
        // When writing, the data will be pulled from the struct reference
        output.write(reinterpret_cast<char*>(&person), sizeof(Person));

        output.close();
    }
    else
    {
        cout << "Could not create file " << filename << endl;
    }

    /////////////////////////////////////////////////////////////////////
    // Read Binary File

    Person someoneElse = {};

    fstream input;

    input.open(filename, ios::binary|ios::in);

    if (input.is_open())
    {
        // When reading, the data will be put to the struct reference
        input.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));

        cout << someoneElse.name << endl;
        input.close();
    }
    else
    {
        cout << "Could not read file " << filename << endl;
    }



    return 0;
}
