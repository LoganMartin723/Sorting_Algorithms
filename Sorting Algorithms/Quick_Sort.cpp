/**
 * Logan Martin
 * Date: 3/28/2025
 * 
 * Quick Sort Algorithm
 */

#include <iostream>
#include <vector>

using namespace std;


int partition(vector<int>&,int,int);
void quickSort(vector<int>&,int,int);

int main()
{
    vector<int> sortingExample = {7, 3, 5, 1};

    cout << "Starting array: ";
    for(int i =0; i < sortingExample.size(); i++)
    {
        if(i < sortingExample.size()-1)
            cout << sortingExample[i] << ", ";
        else
            cout << sortingExample[i] << endl;
    }

    quickSort(sortingExample, 0, sortingExample.size()-1);

    
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

void quickSort(vector<int>& example,int start, int end)
{
    if(end <= start) 
        return;

    int pivot = partition(example, start, end);
    quickSort(example, start, (pivot - 1));
    quickSort(example, (pivot + 1), end);

    return;
}

int partition(vector<int>& partial,int start, int end)
{

    int i = start - 1;
    int pivot = end;

    for(int j = start; j <= (end - 1); j++)
    {
        if(partial[j] < partial[pivot])
        {
            i++;
            int temp = partial[i];
            partial[i] = partial[j];
            partial[j] = temp;
        }
    }

    i++;
    int temp = partial[i];
    partial[i] = partial[pivot];
    partial[pivot] = temp;
    pivot = i;

    return pivot;
}