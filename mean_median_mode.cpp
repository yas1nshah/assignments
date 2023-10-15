#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int data[50];
    cout << "Enter the elements of the array, separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    // Calculate mean
    double mean = 0.0;
    for (int i = 0; i < n; i++)
    {
        mean += data[i];
    }
    mean /= n;

    // Calculate median
    // Sorting array!
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[i] > data[i + 1])
            {
                int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
    double median;
    if (n % 2 == 0)
    {
        median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
    }
    else
    {
        median = data[n / 2];
    }

    // Calculate mode
    int mode = data[0];
    int modeFrequency = 1;
    int currentFrequency = 1;

    for (int i = 1; i < n; i++)
    {
        if (data[i] == data[i - 1])
        {
            currentFrequency++;
        }
        else
        {
            currentFrequency = 1;
        }

        if (currentFrequency > modeFrequency)
        {
            modeFrequency = currentFrequency;
            mode = data[i];
        }
    }

    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << " (occurs " << modeFrequency << " times)" << endl;

    return 0;
}
