/**
 * Logan Martin
 * Date: 3/28/2025
 * 
 * Counting Sort Algorithm
 */

 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 void countingSort(vector<int>&,int);
 void swap(int*,int*);

 int main()
 {
    vector<int> sortingExample = {2,0,1,3,2,1,3,3};
    int size = sortingExample.size();
    cout << "Starting array: ";
    for(int i =0; i < sortingExample.size(); i++)
    {
         if(i < sortingExample.size()-1)
             cout << sortingExample[i] << ", ";
         else
             cout << sortingExample[i] << endl;
    }

    countingSort(sortingExample,size);

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

void countingSort(vector<int>& example, int size)
{
    int maxValueInExample = example[0];

    for(int i = 0; i < size; i++)
    {
        if(maxValueInExample < example[i])
        {
            maxValueInExample = example[i];
        }
    }

    vector<int> uniqueValues((maxValueInExample + 1), 0);
    vector<int> output(size,0);

    for(int i = 0; i < (maxValueInExample + 1); i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(example[j] == i)
                uniqueValues[i]++;
        }
    }
    for(int i = 0; i < (maxValueInExample + 1); i++)
    {
        uniqueValues[i] += uniqueValues[i-1];
    }
    for(int i = (size - 1); i >= 0; i--)
    {
        output[uniqueValues[example[i]] - 1] = example[i];
        uniqueValues[example[i]] = uniqueValues[example[i]] - 1;
    }
    for(int i = 0; i < (size); i++)
    {
        example[i] = output[i];
    }
    return;
}

void swap(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    
    return;
}

