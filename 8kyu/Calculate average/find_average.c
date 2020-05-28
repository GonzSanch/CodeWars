double  find_average(double* array, int length)
{
    int i;
    double sum;

    sum = 0;
    i = 0;
    while (i < length)
    {
        sum += array[i];
        i++;
    }
    return (sum / length);
}
