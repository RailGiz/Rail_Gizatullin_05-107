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

Console.WriteLine($"Расстояние между двумя точками в пространстве равно {GeomertyMath.Distance(p1, p2)}");
Console.WriteLine($"Расстояние от точки до начала координат: {GeomertyMath.Distanceto0(p1, p2)}");
Console.WriteLine($"Скалярное произведение: {GeomertyMath.Scalar(p1, p2)}");
Console.WriteLine($"Сумма координат точек: {Summa.Coord1(p1, p2)},{Summa.Coord2(p1, p2)},{Summa.Coord3(p1, p2)}");
Console.WriteLine($"Векторное произведение: {Vectorproizv.Coord1(p1, p2)},{Vectorproizv.Coord2(p1, p2)},{Vectorproizv.Coord3(p1, p2)}");
Console.WriteLine($"Уравнение прямой: (x-{p1.X})/{Naprlvectr.Coord1(p1,p2)}=(y-{p1.Y})/{Naprlvectr.Coord2(p1,p2)}=(z-{p1.Z})/{Naprlvectr.Coord3(p1,p2)}");
