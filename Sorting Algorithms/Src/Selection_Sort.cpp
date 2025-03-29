/**
 * Logan Martin
 * Date: 3/28/2025
 * 
 * Selection Sort Algorithm
 */

 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 void selectionSort(vector<int>&);
 void swap(int*,int*);

 int main()
 {
     vector<int> sortingExample = {4,9,1,8,2};
 
     cout << "Starting array: ";
     for(int i =0; i < sortingExample.size(); i++)
     {
         if(i < sortingExample.size()-1)
             cout << sortingExample[i] << ", ";
         else
             cout << sortingExample[i] << endl;
     }

    selectionSort(sortingExample);

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

void selectionSort(vector<int>& example)
{
    int originalSize = example.size();
    int smallestValue = 0;

    for(int i = 0; i < originalSize; i++)
    {
        int size = originalSize - i;
        smallestValue = i;
        for(int j = i; j < originalSize; j++)
        {
            if(example[j] < example[smallestValue])
            {
                smallestValue = j;
            }
        }
        swap(&example[i], &example[smallestValue]);

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

