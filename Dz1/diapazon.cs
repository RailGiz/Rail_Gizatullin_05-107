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

int[] array = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16};
BubbleSort(array);
//foreach (int e in array)
//    Console.WriteLine(e);
int n = 0;
for (int i = 0; i < array.Length; i++)
{
    n++;
    if ((array[i + 1] - array[i]) >= 2)
    {
        break;
    }
}
int[] arr3 = array[0..n];
//foreach (int m in arr3)
    //Console.Write("\t" + m);

Console.Write("\n");

int test = array.Length - n;
int[] arr2 = array[n..array.Length];
//foreach (int s in arr2)
    //Console.Write("\t" + s);

if (arr2.Length > arr3.Length)
{
        Console.Write("{" + arr2[0] + ",");
    Console.Write(arr2.Last() + "}");
}
else
{
    
        Console.Write("{"+arr3[0]+",");
    Console.Write(arr3.Last()+"}");
    
}
