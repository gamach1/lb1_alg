#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("17.txt");
    int count = 0;
    int maxsum = 0;
    int arr[10000];

    for (int i = 0; i < 10000; i++)
    {
        f >> arr[i];
    }

    for (int i = 0; i < 9999; i++)
    {
        for (int j = i + 1; j < 10000; j++)
        {
            if ((arr[i] * arr[j]) % 10 == 0)
            {
                count++;
            }
            if (arr[i] + arr[j] > maxsum)
            {
                maxsum = arr[i] + arr[j];
            }
        }
    }
    cout << count << " " << maxsum << endl;
    return 0;
}