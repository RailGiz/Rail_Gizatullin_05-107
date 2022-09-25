string string1 = "rail";
string string2 = "liar";

string aa = String.Concat(string1.OrderBy(c => c));
string bb = String.Concat(string2.OrderBy(c => c));

if (aa == bb)
{
    Console.WriteLine("YES");
}
else
{
    Console.WriteLine("NO");
}
