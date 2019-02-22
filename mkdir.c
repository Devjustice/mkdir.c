#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
    int ret;
 
    if(mkdir("testdir", 0755) != 0)
    {
        printf("mkdir error\n");
 
        return -1;
    }
 
    return 0;
}
