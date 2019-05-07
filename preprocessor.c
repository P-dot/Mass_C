#define ADD

int main(int argc, char argv[])
{   
    int i;
    int k;
:

    int sum;

#ifdef ADD

    sum = i + k;

#else 

    sum = 1 + k + 10;

#endif 

    return 0;
}
