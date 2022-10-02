// реализация без классов

char selection;
Double x1, x2, y1, y2, z1, z2, distance, distanceto01, distanceto02, scalar, vectrproiz, vectrproizz, vectrproizzz, summat, summatt, summattt, ur2, naprl, naprll, naprlll ;
Console.WriteLine("Расстояние между двумя точками в пространстве.");
Console.Write("Введите координаты x1: ");
x1 = Convert.ToDouble(Console.ReadLine());
Console.Write("Введите координаты x2: ");
x2 = Convert.ToDouble(Console.ReadLine());
Console.Write("Введите координаты y1: ");
y1 = Convert.ToDouble(Console.ReadLine());
Console.Write("Введите координаты y2: ");
y2 = Convert.ToDouble(Console.ReadLine());
Console.Write("Введите координаты z1: ");
z1 = Convert.ToDouble(Console.ReadLine());
Console.Write("Введите координаты z2: ");
z2 = Convert.ToDouble(Console.ReadLine());
distance = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2) + Math.Pow(z2 - z1, 2));
distanceto01 = Math.Sqrt(Math.Pow(0 - x1, 2) + Math.Pow(0 - y1, 2) + Math.Pow(0 - z1, 2));
distanceto02 = Math.Sqrt(Math.Pow(0 - x2, 2) + Math.Pow(0 - y2, 2) + Math.Pow(0 - z2, 2));
scalar = ((x1*x2)+(y1*y2)+(z1*z2));
vectrproiz = ((y1 * z2) - (z1*y2));
vectrproizz = ((z1 * x2) - (x1 * z2));
vectrproizzz = ((x1 * y2) - (y1 * x2));
summat = ((x1+x2));
summatt = ((y1+y2));
summattt = ((z1 + z2));
naprl = ((x2 - x1));
naprll = ((y2 - y1));
naprlll = ((z2 - z1));
Console.WriteLine($"Расстояние между двумя точками в пространстве: {distance}");
Console.WriteLine($"Расстояние от первой точки до начала координат: {distanceto01}");
Console.WriteLine($"Расстояние от второй точки до начала координат: {distanceto02}");
Console.WriteLine($"Скалярное произведение: {scalar}");
Console.WriteLine($"Векторное произведение: {vectrproiz},{vectrproizz},{vectrproizzz}");
Console.WriteLine($"Сумма точек: {summat},{summatt},{summattt}");
Console.WriteLine($"Уравнение прямой: (x-{x1})/{naprl}=(y-{y1})/{naprll}=(z-{z1})/{naprlll}");
Console.ReadKey();


