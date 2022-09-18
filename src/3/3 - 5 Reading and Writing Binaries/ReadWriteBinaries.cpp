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


    string filename = "test.bin";
    fstream output;


    output.open(filename, ios::binary|ios::out);

    if (output.is_open())
    {
        output.write(reinterpret_cast<char*>(&person), sizeof(Person));

        output.close();
    }
    else
    {
        cout << "Could not create file " << filename << endl;
    }


    return 0;
}
