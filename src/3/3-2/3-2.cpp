#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    int nLines = 15;
    string fileName = "text.txt";

    ifstream inFile;

    inFile.open(fileName);
    int existLines = 0;

    if (inFile.is_open())
    {
        string line;

        while(inFile)
        {
            existLines++;
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }

    existLines = existLines > 0 ? existLines - 1 : existLines;

    ofstream OutputFile;
    OutputFile.open(fileName);

    if (OutputFile.is_open())
    {
        for (int i = existLines; i < nLines + existLines; i++)
        {
            OutputFile << "Hello file. This is line " << i+1 << endl;
        }

        OutputFile.close();
    }
    else
    {
        cout << "Emplace an exception throw here: " << fileName << endl;
    }

    return 0;
}
