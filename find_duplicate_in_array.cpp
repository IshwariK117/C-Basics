#include <iostream>
using namespace std;

int main()
{
    bool foundDuplicate = false;
    const int MAX_SIZE = 100;                    // Maximum size of the array
    int array[MAX_SIZE] = {1, 2, 3, 4, 2, 3, 5}; // Example array
    int size = 7;                                // Number of elements in the array

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (array[i] == array[j])
            {
                cout << "Duplicate found: " << array[i] << endl;
                foundDuplicate = true;
                break; // Skip checking the rest of the array for this element
            }
        }
        if (foundDuplicate)
        {
            break; // Exit the outer loop if a duplicate has been found
        }
    }

    if (!foundDuplicate)
    {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
