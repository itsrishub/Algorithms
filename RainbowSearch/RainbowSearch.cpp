#include<iostream>

using namespace std;


int RainbowSearch(int a[], int x, int size)
{
    int k = 0;
	
    if(size%2 != 0 && a[size/2] == x)
    {
        cout<<"found at: "<<size/2;
        k=0;
    }
    else
    {
        for(int i=0;i<size/2;i++)
        {
            if(a[i] == x)
            {
                cout<<"found at: "<<i;
                k=0;
                break;
            }
            else if(a[size-1-i] == x)
            {
                cout<<"found at: "<<size-1-i;
                k=0;
                break;
            }
            else
                k = 1;
        }
    }
    if(k == 1)
    cout<<"not found";
    return 0;
}

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int x = 4;
    int size = sizeof(a)/sizeof(a[0]);
	
    RainbowSearch(a, x, size);
	
    return 0;
}
