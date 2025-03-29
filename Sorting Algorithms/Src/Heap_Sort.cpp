/**
 * Logan Martin
 * Date: 3/28/2025
 * 
 * Heap Sort Algorithm
 */

#include <iostream>
#include <vector>

using namespace std;

void heapSort(vector<int>&);
void heapify(vector<int>&,int,int);

int main()
{
    vector<int> sortingExample = {7, 3, 5, 1, 6};

    cout << "Starting array: ";
    for(int i =0; i < sortingExample.size(); i++)
    {
        if(i < sortingExample.size()-1)
            cout << sortingExample[i] << ", ";
        else
            cout << sortingExample[i] << endl;
    }

    heapSort(sortingExample);

    cout << "Sorted array: ";
    for(int i = 0; i < sortingExample.size(); i++)
    {
        if(i < sortingExample.size()-1)
            cout << sortingExample[i] << ", ";
        else
            cout << sortingExample[i] << endl;
    }
    return 0;
}

void heapSort(vector<int>& example)
{
    int size = example.size();

    for(int i = size/2 - 1; i >= 0; --i)
        heapify(example, size, i);

    for(int i = size - 1; i >= 0; --i)
    {
        int temp = example[0];
        example[0] = example[i];
        example[i] = temp;

        heapify(example, i, 0);
    }

    return;
}

void heapify(vector<int>& example, int size,int root)
{
    int largest = root;
    int leftIndex = 2 * largest + 1;
    int rightIndex = 2 * largest + 2;

    if(leftIndex < size && example[leftIndex] > example[largest])
    {
        largest = leftIndex;
    }
    if(rightIndex < size && example[rightIndex] > example[largest])
    {
        largest = rightIndex;
    }
    if(largest != root)
    {
        int temp = example[root];
        example[root] = example[largest];
        example[largest] = temp;

        heapify(example, size, largest);
    }
    return;
}