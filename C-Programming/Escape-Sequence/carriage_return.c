/* \r is used for carriage return
The characters after \r will occupy the place of the left most (stating) characters
The output is dependent upon compiler. */
#include <stdio.h>
int main()
{
       printf("Hello World\rhi there");
       return (0);
}

// O/P: hi thererld