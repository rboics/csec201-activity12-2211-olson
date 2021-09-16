// For educational uses only
// Doing anything like this in production would be.... silly.

#include <stdio.h>
#define size 5

void printBy4(int * array)
{

}

void printBy1(int * array)
{

}

int main(void)
{
    int arr[size];
    for(int i = 0; i < size; i++)
    {
      arr[i] = i;
    }
    printBy4(arr);
    printBy1(arr);
}
