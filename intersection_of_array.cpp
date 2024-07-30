#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 2, 1};
    int arr2[] = {2, 2};
    unordered_set<int> set1;
    unordered_set<int> intersection;

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Insert elements of arr1 into set1
    for (int i = 0; i < size1; ++i)
    {
        set1.insert(arr1[i]);
    }

    // Check if elements of arr2 are in set1
    for (int i = 0; i < size2; ++i)
    {
        if (set1.find(arr2[i]) != set1.end())
        {
            intersection.insert(arr2[i]);
        }
    }

    // Output the intersection
    cout << "Intersection: ";
    for (int elem : intersection)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
