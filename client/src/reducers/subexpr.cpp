#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    string s, temp;
    string arr[10][2]; // assuming 10 unique operations with LHS and RHS stored
    int flag = 0, index = 0;
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    while (getline(inputFile, s))
    {
        flag = 0;
        temp = s.substr(s.find("=") + 1);

        for (int i = 0; i < index; i++)
        {
            if (temp == arr[i][1])
            {
                flag = 1;
                break;
            }
            else if (temp.find(arr[i][1]) != string::npos)
            {
                size_t found = s.find(arr[i][1]);
                while (found != string::npos)
                {
                    s.replace(found, arr[i][1].length(), arr[i][0]);
                    found = s.find(arr[i][1], found + arr[i][0].length());
                }
            }
        }

        if (flag == 0)
        {
            arr[index][0] = s.substr(0, s.find("="));
            arr[index][1] = temp;
            index++;
            outputFile << s << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}