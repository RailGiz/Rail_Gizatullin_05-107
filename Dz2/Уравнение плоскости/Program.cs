Point3D Read3DPoint()
{
    Console.Write("Введите координаты x: ");
    var x = Convert.ToDouble(Console.ReadLine());
    Console.Write("Введите координаты y: ");
    var y = Convert.ToDouble(Console.ReadLine());
    Console.Write("Введите координаты z: ");
    var z = Convert.ToDouble(Console.ReadLine());
    return new Point3D(x, y, z);
}



Console.WriteLine("Введите первую точку:");
var p1 = Read3DPoint();
Console.WriteLine("Введите вторую точку:");
var p2 = Read3DPoint();
Console.WriteLine("Введите третью точку:");
var p3 = Read3DPoint();

double a = p1.Y * (p2.Z - p3.Z) + p2.Y * (p3.Z - p1.Z) + p3.Y * (p1.Z - p2.Z);
double b = p1.Z * (p2.X - p3.X) + p2.Z * (p3.X - p1.X) + p3.Z * (p1.X - p2.X);
double c = p1.X * (p2.Y - p3.Y) + p2.X * (p3.Y - p1.Y) + p3.X * (p1.Y - p2.Y);
double d = -(p1.X * (p2.Y * p3.Z - p3.Y * p2.Z) + p2.X * (p3.Y * p1.Z - p1.Y * p3.Z) + p3.X * (p1.Y * p2.Z - p2.Y * p1.Z));

Console.WriteLine($"Уравнение плоскости: {a}X+{b}Y+{c}Z+{d}");
