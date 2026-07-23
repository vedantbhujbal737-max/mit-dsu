#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 10;
    int i, found = 0;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Element %d found at position %d", key, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
