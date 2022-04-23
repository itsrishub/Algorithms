#include<iostream>

using namespace std;

void HelixSort(int a[], int size)
{
    int temp;
    int i, k, j = 0;

    while(j < size)
    {
        for(i = 0; i < size-1; i++)
        {
            if(a[i] > a[i+2] && i < size-2)
            {
                temp = a[i];
                a[i] = a[i+2];
                a[i+2] = temp;

            }

            if(a[i+1] > a[i+3] && i < size-3)
            {
                temp = a[i+1];
                a[i+1] = a[i+3];
                a[i+3] = temp;

            }

            if (a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        j++;
    }
   
    for(k = 0; k < size; k++)
    {
        cout<<a[k]<<" ";
    }
}

int main()
{
    int a[7] = {789, 111, 567, 875, 238, 907, 227};
    int size = sizeof(a)/sizeof(a[0]);

    HelixSort(a, size);
    
    return 0;    
}