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
var distance = GeomertyMath.Distance(p1, p2);
Console.WriteLine($"Расстояние между двумя точками в пространстве равно {distance}");
var distanceto0 = GeomertyMath.Distanceto0(p1, p2);
Console.WriteLine($"Расстояние от точки до начала координат: {distanceto0}");
var scalar = GeomertyMath.Scalar(p1, p2);
Console.WriteLine($"Скалярное произведение: {scalar}");
