#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename = "stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open()) {
        return 1;
    }

    while (input)
    {
        string line;
        getline(input, line, ':');

        int population = 0;
        input >> population;

        input.get();

        cout << "Item: " << line << endl;
        cout << "Data: " << population << endl;
    }

    input.close();
    return 0;
}
