#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    int nLines = 15;
    string OutfileName = "text.txt";


    ofstream OutputFile;
    OutputFile.open(OutfileName);

    if (OutputFile.is_open())
    {
        for (int i = 0; i < nLines; i++)
        {
            OutputFile << "Hello file. This is line " << i+1 << endl;
        }

        OutputFile.close();
    }
    else
    {
        cout << "Emplace an exception throw here: " << OutfileName << endl;
    }

    return 0;
}
