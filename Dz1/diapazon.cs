void BubbleSort(int[] array)
{
    for (int i = 0; i < array.Length; i++)
        for (int j = 0; j < array.Length - 1; j++)
            if (array[j] > array[j + 1])
            {
                int t = array[j + 1];
                array[j + 1] = array[j];
                array[j] = t;
            }
}

int[] array = { 1, 0, 4, 6, 14, 11, 3, 10, 2, 15, 0, 5, 16, 8, 12, 9, 13};
BubbleSort(array);
foreach (int e in array)
    Console.WriteLine(e);
int n = 0;
for (int i = 0; i < array.Length; i++)
{
    n++;
    if ((array[i+1] - array[i]) >= 2)
    {
        break;
    }    
}
int[] arr3 = new int[array.Length];
Array.Copy(array, 0, arr3, 0, n);
foreach (int m in arr3)
    Console.Write("\t" + m);

Console.Write("\n");

int test = array.Length - n;
int[] arr2 = new int[array.Length]; 
Array.Copy(array, n, arr2, 0, test);
foreach (int s in arr2)
    Console.Write("\t" + s);

