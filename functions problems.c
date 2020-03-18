////////////////////////////////////////

int func(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num >>= 1;
    }
    return(count);
}
// The value returned by func(435) is ___________

// [GATE 2014]

////////////////////////////////////////////////
